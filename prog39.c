#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  printf("1st integer=%d\n",a);
  printf("2nd integer=%d\n",b);
  printf("3rd integer=%d\n",c);
  if(a>=b && a>=c)
  {
  printf("%dis greatest no\n",a);
  }
  else if(b>=a && b>=c)
  {
  printf("%dis greatest no\n",b);
  }
  else
  {
  printf("%dis greatest no\n",c);
  }
  }
