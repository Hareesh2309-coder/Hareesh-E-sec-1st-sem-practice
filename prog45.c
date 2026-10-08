#include<stdio.h>
int main()
{
  char a;
  scanf("%d",&a);
  printf("character=%s\n",a);
  if(a>='A' && a<='Z');
  {
  printf("UPPERCASE");
  }
  else if(a>='a' && a<='z');
  {
  printf("lowercase");
  }
  else
  {
  printf("not an alphabet");
  }
  }
