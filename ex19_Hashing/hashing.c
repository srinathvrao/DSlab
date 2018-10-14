#include "imple.c"
void main()
{
	int ch,ch1=1,ele;
	while(ch1==1)
	{
		printf("\n MENU \n 1. Insert with Separate Chaining Collision Technique \n 2. Insert with Linear Probing Collision Techinque \n 3. Insert with Quadratic Probing Collision Technique \n 4. Exit \n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			while(ch1==1)
			{
				case 1:
				printf("\n 1. Insert \n 2. Display \n 3. Exit \n Enter your choice:");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						printf("\n Enter the element to be entered:");
						scanf("%d",&ele);
						insert_sep(ele);
						break;
					case 2:
						display_sep();
						break;
					case 3:
						ch1=0;
						break;
					default:
						printf("\n Enter an appropriate choice!"); 
				}	
			}
			break;
			while(ch1==1)
			{
				case 2:
				printf("\n 1. Insert \n 2. Display \n 3. Exit \n Enter your choice:");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						printf("\n Enter the element to be entered:");
						scanf("%d",&ele);
						insert_lin(ele);
						break;
					case 2:
						display_prob();
						break;
					case 3:
						ch1=0;
						break;
					default:
						printf("\n Enter an appropriate choice!"); 
				}
			
			}
			break;
			while(ch1==1)
			{
				case 3:
				printf("\n 1. Insert \n 2. Display \n 3. Exit \n Enter your choice:");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						printf("\n Enter the element to be entered:");
						scanf("%d",&ele);
						insert_quad(ele);
						break;
					case 2:
						display_prob();
						break;
					case 3:
						ch1=0;
						break;
					default:
						printf("\n Enter an appropriate choice!"); 
				}
			}
			break;	
			case 4:
				ch1=0;
				break;
			default:
					printf("\n Enter an appropriate choice!");
		}
	}
}
