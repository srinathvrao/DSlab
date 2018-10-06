#include "queueapp.c"

void main()
{
    int ch=1,c,x,y,v,l=1,o=1;
    char name[20],desc[15];
    while(ch==1)
    {
        printf("\n-----QUEUE MENU-----\n");
        printf("1.Josephus\n2.Helpdesk\n3.Exit\n");
       scanf("%d",&c); 
       switch(c)
       {
            case 1:while(l==1)
                  {
                   printf("Josephus menu\n");
                   printf("1.Create\n2.Josephus\n3.Exit\n");
                   scanf("%d",&v);
                   switch(v)
                   {
                       case 1:creat();
                              break;
                        case 2:printf("enter the no of people\n");
	                           scanf("%d",&x);
	                           printf("enter the rounds after which execution takes place");
	                           scanf("%d",&y);
	                           josephus(x,y);
                               break;
                        case 3:l=0;
                                break;
                       
                   }
                  }
                   l=1;
                   break;
           
            case 2:while(o==1)
                  {
                   printf("\nHelpdesk menu");
                   printf("\n1.Enque\n2.helpdesk\n3.helpdesk display\n4.Display\n5.Allot room to the member\n6.Exit\n ");
                   printf("\n Enter choice :");
                   scanf("%d", &v);
                   switch (v)
                   {
        	     	 case 1:
	                       printf("\nEnter name :");
	                       scanf("%s",name);
	                       printf("\nEnter des:");
                           scanf("%s",desc);	            
	                       enqu(name,desc);
	                       break;
	               case 2:
	                       helpdesk();
	                       break;
	        
	               case 3:
	                       printf("\nthe memebers with platinum membership are\n");
                           display(f2,r2);
                           printf("\nthe memebers with elite membership are\n");
                           display(f3,r3);
                           printf("\nthe memebers with new membership are\n");
                           display(f4,r4);
                           break;
	               case 6:
	                         o=0;
			                 break;
	               case 4:
	                        display(front,rear);
	                        break;
	               case 5:  if(front==NULL)
	                        printf("\nthere are no people at your hotel awaiting for room allotment");
	                        else
	                        {
	                        printf("\nenter the membership type to allot the next room");
	                        scanf("%s",desc);
	                        if(strcmp(desc,"platinum")==0)
                            {
                            if(b==0)
                            printf("\nthere are no members with this membership awaiting for room allotment");
                            else
                              {
                                deque(f2,"platinum");
                                f2=f2->next;
                                b--;
                            }
                            }
                            else if(strcmp(desc,"elite")==0)
                            {
                            if(c==0)
                            printf("\nno members");
                            else
                            {
                            deque(f3,"elite");
                                f3=f3->next;
                                c--;
                            }
                            }
                            else if(strcmp(desc,"new")==0)
                            {
                            if(d==0)
                            printf("\nthere are no members with this membership awaiting for room allotment");
                            else
                            {
                                deque(f4,"new");
                                f4=f4->next;
                                d--;
                            }
                            }
                            else
                            ;
                            p=front;
                            if(strcmp((p->des),desc)==0)
                            {
                                front=front->next;
                                free(p);
                                p=front;
                                a--;
                            }
                            else
                            {
                            struct help*pre,*qua;
                            while(strcmp((p->next)->des,desc)!=0)
                            p=p->next;
                            pre=p;
                            p=p->next;
                            qua=p;
                            p=p->next;
                            free(qua);
                            pre->next=p;
                            a--;
                            }
	                        }
                            break;
	                                            
	        
	               default:
	                         printf("\nWrong choice");
	                         break;
                   }
                  }
                   o=1;
                   break;
            
            case 3:ch=0;
                  break;
       }
    }
}
