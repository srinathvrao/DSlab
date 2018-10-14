#include"binarydefinition.c"
void main()
{	int ch,newdata,i;
	do
	{
		printf("\n MENU:\n 1.Create\n 2.Insert\n 3.Isempty\n 4.Size\n 5.Count leaf\n 7.preorder traversal\n 8.Postorder traversal\n 9.inorder traversal\n 6.levelorder traversal\n 0.exit\n choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: root=create_tree();
					break;
			case 2: printf("\n enter new data: ");
					scanf("%d",&newdata);
					root=ins_node(root,newdata);
					break;
			case 3: if(isempty(root))
					{
						printf("\nTHE TREE IS EMPTY.");
					}
					break;
			case 4: printf("\n Size of the tree= %d",count);
					break;
			case 5: count_leaf(root);
					printf (" Number of leaf nodes= %d",leaf_count);
					break;
			/*case 6: height=height_tree(root);
					printf("\n Height of tree= %d",height);
					break;*/       
			case 7: printf("\n ***PREORDER TRAVERSAL***\n");
					preorder(root);
					break;
			case 8: printf("\n ***POSTORDER TRAVERSAL***\n");
					postorder(root);
					break;
			case 9: printf("\n ***INORDER TRAVERSAL***\n");
					inorder(root);
					break;
			case 6: printf("\n ***LEVELORDER TRAVERSAL***\n");
					 for(i=1;i<=4;i++)
					 {
					 	levelorder(root,i);
						printf("\n");	
					 }
					 break;          
			case 0: exit(0);
			default: printf("\n ***INVALID CHOICE***");	
		}
	}while(ch!=0);
}
