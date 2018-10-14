#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct node{
	char name[100];
	int lat,lon;
	struct node *left;
	struct node *right;
}root;
struct node* getnode()
{
	struct node *new_node=malloc(sizeof(struct node));
	new_node->left=NULL;
	new_node->right=NULL;
	new_node->lat=new_node->lon=NULL;
	return new_node;
}
void insert(struct node *root,struct node *new_node)
{
	if(strcmp(root->name,new_node->name)<0)
	{
		if(root->right==NULL)
		root->right=new_node;
		else
		insert(root->right,new_node);
	}
	else
	{
		if(root->left==NULL)
		root->left=new_node;
		else
		insert(root->left,new_node);
	}
}
/*void display(struct node *temp)
{
	char name[100];int lat,lon;
	if(temp!=NULL)
	{
		display(temp->left);
		strcpy(name,temp->name);
		printf("\n name : %s",name);
		lon=temp->lon;lat=temp->lat;
		printf("\nlat: %d\tlong: %d",lat,lon);
		display(temp->right);
	}
}*/
void traverse(struct node*root,int level)
		{
			if(root==NULL)
			return;
			if(level==1)
			printf("%s\n",root->name);
			else if(level>1)
			{
				traverse(root->left,level-1);
				traverse(root->right,level-1);
			}
			
		}
int height(struct node *root)
{
	int max;
	if(root==NULL)
	return -1;
	max=(height(root->left)>height(root->right))?(height(root->left)):(height(root->right));
		return max+1;
}
void display(struct node *root)
{
	struct node *temp;
	temp=root;
	

		int i;
		int height_root=height(root);
		if(height_root==0)
		printf("tree is empty");
		else{
		
		for(i=1;i<=height_root;i++)
		{
			printf("level:%d\n",i);
			traverse(root,i+1);
		}
	}
}
int search(struct node *root,char ele[100])
{
	if(root==NULL)
	return -1;
	else if(strcmp(root->name,ele)==0)
	return 1;
	else if(strcmp(root->name,ele)<0)
	search(root->right,ele);
	else if(strcmp(root->name,ele)>0)
	search(root->left,ele);
	else
	return -1;
}
struct node* min(struct node *root)
{
		struct node *temp=root;
		if(root==NULL)
		return root;
		else
		{
	    while(temp->left!=NULL)
	    temp=temp->left;
	    return temp;
	    }
}
struct node *delete(struct node *root,char data[100])
{
	if(root==NULL)
		{
			return root;
		}
		if(strcmp(data,root->name)<0)
		root->left=delete(root->left,data);
		else if(strcmp(data,root->name)>0)
		root->right=delete(root->right,data);
		else
		{
			if(root->left==NULL)
			{
				struct node *temp=root->right;
				free(root);
				return temp;
			}
			else if(root->right==NULL)
			{
				struct node *temp=root->left;
				free(root);
				return temp;
			}
			struct node *temp=min(root->right);
			strcpy(root->name,temp->name);
			root->right=delete(root->right,temp->name);
			
		}
		return root;
		 
	
}
void main()
{
	int ch;
	struct node *root=getnode();
	printf("MENU\n1.insert\n2.display\n3.search\n4.delete\nenter -1 to exit");
	do{
		printf("\nenter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:{
				struct node *new_node;
	            char name[100];
	            int lat,lon;
          	new_node=getnode();
	printf("enter the name of the city");
	scanf("%s",name);
	printf("enter the latitude:");
	scanf("%d",&lat);
	printf("enter the longitude:");
	scanf("%d",&lon);
	strcpy(new_node->name,name);
	new_node->lat=lat;
	new_node->lon=lon;
	if(root==NULL)
	{
	root=new_node;}
	else
	insert(root,new_node);
	fflush(stdin);
				
				break;
			}
			case 2:{
				display(root);
				break;
			}
		
		case 3:{
			char name[100];
			printf("enter the city name to be searched:");
			scanf("%s",name);
			if(search(root,name)==1)
			printf("name found");
			else
			printf("name not found");
			break;
		}
		case 4:{
			char data[100];
			printf("enter the name to be deleted:");
			scanf("%s",data);
			delete(root,data);
			break;
		}
}
	
}while(ch!=-1);
}
