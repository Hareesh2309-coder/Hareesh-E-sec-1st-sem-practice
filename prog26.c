#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d",&a);
   scanf("%d",&b);
   printf("first integer:%d\n",a);//7
   printf("second integer:%d\n",b);//2
   printf("\tIMPLICIT CONVERSION\n");
   printf("%d\n",a/b);//3
   printf("\tEXPLICIT CONVERSION\n");
   printf("double division=%lf\n",(double)a/b);//3.50000000
   return 0;
}
