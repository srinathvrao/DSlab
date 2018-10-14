#include"queuefunc.c"
void main()
{
    int no, ch, e;
 
    printf("\n 1 - Create\n 2 - Enque\n 3 - Deque\n 4 - IsEmpty\n 5 - Display\n 6 - Exit\n");
    
    
    
    create();
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        	case 1: create(); break;
	        case 2:
	            printf("\nEnter data : ");
	            scanf("%d", &no);
	            enq(no);
	            break;
	        case 3:
	            deq();
	            break;
	        
	        case 4:
	            empty();
	            break;
	        case 6:
	            exit(0);
	        case 5:
	            display();
	            break;
	        
	        default:
	            printf("\nWrong choice");
	            break;
        }
    }
}
