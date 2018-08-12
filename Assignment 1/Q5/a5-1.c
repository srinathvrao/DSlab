#include "a5-c.c"

int main()
{
	int x;
	while(ch!=8)
    {
        printf("\n\n---- Circular Linked List(CLL) Menu ----");
        printf("\n1.Insert\n2.Display\n3.Delete\n4.Find\n5.Find 'K'\n6.Length\n7.Next Item\n8.Exit\n\n");
        printf("Enter your choice(1-8):");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("\n---- Insert Menu ----");
                    printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at specified position\n4.Exit");
                    printf("\n\nEnter your choice(1-4):");
                    scanf("%d",&ch);
 
                    switch(ch)
                    {
                        case 1: insert_beg();
                                break;
                        case 2: insert_end();
                                break;
                        case 3: insert_pos();
                                break;
                        case 4: exit(0);
                        default: printf("Wrong Choice!!");
                    }
                    break;
 
            case 2: display();
                    break;
 
            case 3: printf("\n---- Delete Menu ----");
                    printf("\n1.Delete from beginning\n2.Delete from end\n3.Delete from specified position\n4.Exit");
                    printf("\n\nEnter your choice(1-4):");
                    scanf("%d",&ch);
 
                    switch(ch)
                    {
                        case 1: delete_beg();
                                break;
                        case 2: delete_end();
                                break;
                        case 3: delete_pos();
                                break;
                        case 4: exit(0);
                        default: printf("Wrong Choice!!");
                    }
                    break;
            case 5: findk();
            		break;
            case 4: find();
            		break;
            case 6: x = get_length();
            		printf("\n The number of elements in the list are: %d",x );
            		break;
	    case 7: next_item();
			        break;
            case 8: ;
                    default: printf("Wrong Choice!!");
        }
    }
}

