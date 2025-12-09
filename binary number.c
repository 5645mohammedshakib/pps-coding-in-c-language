#include<stdio.h>
int main(void)
{
	int decNum,binNum=0,i=1,rem;
	printf("enter a decimal numner:");
	scanf("%d",&decNum);
	while(decNum!=0)
	{
		rem=decNum%2;
		decNum/=2;
		binNum+=rem*i;
		i*=10;
	}
	printf("binary number:%d",binNum);
	return 0;
}
