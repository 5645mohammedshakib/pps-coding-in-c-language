//string length function
//int strlen(char[]);
#include<stdio.h>
#include<string.h>
int main(void)
{
  char str[20];
  int len;
  puts("enter your city name:");
  gets(str);
  len=strlen(str);
  printf("\nlength of the given string is :%d",len);
} 