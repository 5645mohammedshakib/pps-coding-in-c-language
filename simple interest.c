#include<stdio.h>
int main(void)
{
	double p,t,r,si;
	printf("enter the principal amount:");
	scanf("%lf",&p);
	
	printf("enter the time duration in(years):");
	scanf("%lf",&t);
	
	printf("enter the rate of interest:");
	scanf("%lf",&r);
	
	si=p*t*r/100;
	
	printf("the simple interest is:%lf",si);
	
	return 0;
}
