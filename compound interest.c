//compound intesrest 
#include<stdio.h>
#include<math.h>
int main(void)
{
	double p,t,r,amount,ci;
	printf("enter the principal amount:");
	scanf("%lf",&p);
	
	printf("enter the time duration in (years):");
	scanf("%lf",&t);
	 
	printf("enter the rate of interest:");
	scanf("%lf",&r);
	
	amount=p*((pow((1+r/100),t)));
	ci=amount-p;
	printf("compound interest is :%lf",ci);
	return 0;
	
}
