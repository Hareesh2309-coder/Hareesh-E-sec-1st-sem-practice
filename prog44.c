#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  printf("mark=%d\n",a);
  if(a<100 && a>=90)
  {
  printf("grade A");
  }
  else if(a<90 && a>=70)
  {
  printf("grade B");
  }
  else if(a<70 && a>=50)
  {
  printf("grade C");
  }
  else
  {
  printf("fail");
  }
  }
