//minimum of three numbers
#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("Enter a,b,c values:");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && a<c)
	{
		printf("%d is minimum:",a);
	}
	else if(b<c)
	{
		printf("%d is minimum:",b);
	}
	else
	{
		printf("%d is minimum:",c);
	}
	return 0;
}
