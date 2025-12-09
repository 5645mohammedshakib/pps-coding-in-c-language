//printing array element in reverse order through pointer
#include<stdio.h>
int main (void)
{
	int arr[5],i;
	int* ptr;
	//reading element into the array through pointer
	ptr=arr;
	printf("enter 5-element:\n");
	for(i=0;i<5;i++)
	   scanf("%d",ptr+i);
	//printing the array elements in reverse order
	ptr=&arr[4];
	printf("\nelements in the array (reverse order):\n");
	for(i=0;i<5;i++)
	   printf("%d",*(ptr-i));   
}
