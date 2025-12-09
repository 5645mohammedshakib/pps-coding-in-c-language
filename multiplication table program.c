//multiplication table program
#include<stdio.h>
int main(void)
{
	int i,num,rows;
	printf("enter the number to print multiplication table:");
	scanf("%d",&num);
	
	printf("enter the number of rows:");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	   printf("%d*%d=%d\n",num,i,num*i);
	return 0;   
}
