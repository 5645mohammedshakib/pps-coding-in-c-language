#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,add,sub,mul,mod;
	float div;
	char ch;
	printf("enter the operation (+,-,*,%%,/):");
	scanf("%c",&ch);
	printf("enter a and b value:");
	scanf("%d %d",&a,&b);
	switch(ch)
	{
	    case '+':add=a+b;
	             printf("addition (a+b) :%d",add);
			     break;
		case '-':sub=a-b;
		         printf("subtraction (a-b) :%d",sub);
		         break;
		case '*':mul=a*b;
		         printf("multiplication (a*b) :%d",mul);
				 break;
		case '%':mod=a%b;
		         printf("modolus division (a%b) :%d",mod);
		         break;
		case '/':div=(float)a/b;
		         printf("division (a\b) :%f",div);
				 break;
		default:printf("invalid statement:");
		
		return 0;		        
				          
		        	   	
	}	
}
