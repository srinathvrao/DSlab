#include "6-c.c"

int main(){
	
	
	char s[10] = "{{{{}}}",c;
	int i=0,a=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='{' || s[i]=='(' )	
			Push(s[i]);
		else{
			if(s[i]=='}'){
				if(Pop()!='{'){
					a=-1;
					printf("\nExpression is not balanced\n");
					break;
				}
			}
			else if(s[i]==')'){
				if(Pop()!='('){
					a=-1;
					printf("\nExpression is not balanced\n");
					break;
				}
			}
		}
	}
	
	if(TOP!=NULL && a==0)
		printf("\nExpression is not balanced\n");
	
	return 0;
}
