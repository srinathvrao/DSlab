#include "AVLc.c"

int main() 
{ 
	int n,val,i;
   struct Node *root = NULL; 
    char name[15],max[15],min[15];
  while(1)
  {
  	printf("\nOptions....\n1.Insert\n2.Deletion\n3.Show\n4.Find max and min\n5.Search\n6.Exit\nChoose:");
  	scanf("%d",&n);
  	switch(n)
  	{
  		case 1:
  			printf("Enter the name: ");
  			scanf("%s",name);
  			root =  insert(root,name);
			printf("\nInserted");
  			break;
  		case 3:
			printf("\n\tOptions...\n1.Preorder\n2.Postorder\n3.Inorder\n4.Levelorder\t\tChoose:");
			scanf("%d",&i);
			switch(i)
			{
			case 1:
				printf("\nPreorder:\n");
				preOrder(root);
				break;
			case 2:
				printf("\nPostorder:\n");
				postorder(root);
				break;
			case 3:
				printf("\nInorder:\n");
				inorder(root);
				break;
			case 4:
				printf("\nLevelorder:\n");
				printLevelOrder(root);
				break;
			default:
				printf("\nWrong choice\n");
			}
  			break;
  		case 6:
  			exit(0);
  			break;
  		case 2:
  			printf("\nEnter the name to be deleted: ");
  			scanf("%s",name);
  			deleteNode(root,name);
  			break;
  		case 4:
  			strcpy(max,maxValueNode1(root));
  			strcpy(min,minValueNode1(root));
  			printf("\nMax : %s",max);
  			printf("\nMin: %s",min);
  			break;
  		case 5:
  			printf("\nEnter the name to be searched: ");
  			scanf("%s",name);
  			search(name,root);
  			break;
  			
  		default:
  			printf("\nWrong choice");
	}
  }
}

