#include"file10.c"
void main()
{
    int ch=1,c,x;
    while(ch==1)
    {
        printf("\nTree Menu");
        printf("\n 1.Create \n 2.Insert \n 3.Isempty \n 4.Search \n 5.Find minimum \n 6.Find maximum \n 7.Printorder \n 8.Inorder \n 9.Preorder \n 10.Postorder \n 11.Size of the tree \n 12.Delete \n 13.Level Order \n 14.Exit");
        printf("\n Enter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:create();
                    break;
            case 2:printf("\n Enter the element:");
                    scanf("%d",&x);
                    insert(x);
                    break;
            case 3:isempty();
                    break;
            case 4:printf("\n Enter the element to be searched:");
                    scanf("%d",&x);
                    temp = NULL;
                    x = search(x,top);
                    if(x)
                    printf("\n Element found!");
                    else
                    printf("\n Element not found!");
                    break;
            case 5:x=findmin();
                    printf("\n Minimum element is %d",x);
                    break;
            case 6:x=findmax();
                    printf("\n Maximum element is %d",x);
                    break;
            case 7:printf("%d",top->data);
                    printf("\n");
		    printf("%d->%d",top->left->data,top->right->data);
                    printorder(top->left,top->right);
                    break;
            case 8:inorder(top);
                    break;
            case 9:preorder(top);
                    break;
            case 10:postorder(top);
                    break;
            case 14:ch=0;
                    break;
            case 11:treesize();
                    break;
            case 12:printf("\n Enter the element to be deleted:");
            		scanf("%d",&x);
            		delete(x);
            		break;
            case 13:levelorder(top);
            		break;
        }
    }
}
