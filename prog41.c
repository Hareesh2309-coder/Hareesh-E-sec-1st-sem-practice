#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  printf("no=%d\n",a);
  if(a%5==0 && a%10==0)
  {
  printf("no is divisible by both 5 and 10\n");
  }
  else
  {
  printf("no is not divisible by 5 and 10\n");
  }
  }
