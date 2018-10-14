 #include"searchdefinition.c"
 
 void main()
 {	int choice,sid;
    char sname[20];
 	printf("\n NUMBER OF EMPLOYEES:");
 	scanf("%d",&max);
 	input();
 	do
 	{
 	printf("menu: \n1.search by name [linear search] \n2.search by number [binary search]\n3.exit\n");
 	scanf("%d",&choice);
 	switch(choice)
 	{
 		case 1: printf("\nsearch by name\n");
		 		printf("\n enter name to be searched:");
				scanf("%s",sname);
			 	searchname(sname);
				break;
		case 2: printf("\n search by ID");
				printf("\n enter ID to be searched:");
				scanf("%d",&sid);
				sort();
				count1=0;
				searchid(sid,0,max);
				printf("\n the no. of comparisons = %d",count1);
				break;	
		case 3:
			break;
		default: printf("\n invalid choice");				
	}
}while(choice!=3);
 }
