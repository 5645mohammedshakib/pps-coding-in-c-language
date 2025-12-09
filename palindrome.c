#include<stdio.h>
int main(void)
{
	int num,pnum,rem,sum=0,rev=0;
	printf("enter any positive integer:");
	scanf("%d",&num);
	pnum=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("\nsum of individual digits of %d is :%d",pnum,sum);
	num=pnum;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(pnum==rev)
	   printf("\n%d is a palindrome",pnum);
	else
	   printf("\n%d is not a palindrome",pnum);   
}
