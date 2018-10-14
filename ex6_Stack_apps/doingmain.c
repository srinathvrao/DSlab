#include"bala.c"
#include"posteval.c"
#include"infixpost.c"

int main()
{
	int y;
	char b[100],*p;
	char a[100];
	while(1)
	{
	printf("\n***********STACK APPLICATIONS***********************\n");
	printf("1.Balancing symbols\n2.Postfix eval3uation\n3.Infix to postfix conversion\n4.Exit\nChoice: ");
	scanf("%d",&y);
	switch(y)
	{
		case 1:
			printf("\nEnter the Expression: \n");
			scanf("%s",&a);
			if(balanced(a))
			{
				printf("Balanced");
			}
			else
			{
				printf("Not balanced");
			}
			break;
		case 2:
			printf("\nEnter the expression: \n");
			scanf("%s",&a);
			int l =strlen(a);
			eval(a,l);
			break;
		case 3:
			printf("Enter the expression:  ");
			scanf("%s",&b);
			p=b;
			printf("Infix expression: ");
			puts(b);
			printf("Post fix expression: ");
			eval3(p);
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Wrong choice");
	}
}
}
