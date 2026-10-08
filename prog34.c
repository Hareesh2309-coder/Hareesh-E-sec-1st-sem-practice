#include<stdio.h>
int main()
{
   int a=5,b=10;
   int temp=a;
   a=b;
   b=temp;
   printf("%d\n",a);
   printf("%d\n",b);
   return 0;
   }
