//string length function
//int strlen(char[]);
#include<stdio.h>
#include<string.h>
int main(void)
{
  char str[20]="Hyderabad";
  int len,size;
  len=strlen(str);
  size=sizeof(str);
  printf("\nlength of the given string is :%d",len);
  printf("\nsize of the given string is :%d",size);
} 