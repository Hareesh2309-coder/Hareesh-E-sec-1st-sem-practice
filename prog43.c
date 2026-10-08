#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  printf("year=%d\n",a);
  if(a%4==0 && a%400==0)
  {
  printf("leap year\n");
  }
  else
  {
  printf("not a leap year\n");
  }
  }
