#include<stdio.h>
int main(void)
{
	int i,n;
	//initialize first and second terms
	int t1=0,t2=1;
	//initialize the next term (3rd term)
	int nextTerm=t1+t2;
	//get no. of terms from user 
	printf("enter the number of terms:");
	scanf("%d",&n);
	//print the first two terms t1 and t2
	printf("fibonacci series :%d,%d,",t1,t2);
	//print 3rd to nth term
	for(i=3;i<=n;++i)
	{
		printf("%d,",nextTerm);
		t1=t2;
		t2=nextTerm;
		nextTerm=t1+t2;
	}
	return 0;
}
