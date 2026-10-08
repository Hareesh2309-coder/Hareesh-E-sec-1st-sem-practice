#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d",&a);//23
   scanf("%d",&b);//28
   printf("first integer:%d\n",a);
   printf("second integer:%d\n",b);
   printf("%d\n",(a && b));
   printf("%d\n",(a || b));
   printf("%d\n",!a);
   printf("%d\n",!b);
   return 0;
}
   
