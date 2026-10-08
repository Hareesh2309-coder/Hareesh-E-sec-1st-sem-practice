#include<stdio.h>
int main()
{
   int a,b,c,d;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   scanf("%d",&d);
   printf("first integer:%d\n",a);//1
   printf("second integer:%d\n",b);//2
   printf("third integer:%d\n",c);//5
   printf("fourth integer:%d\n",d);//4
   printf("%d\n",(a+b)*(c-d));//3*1
   printf("RESULT=%d\n",(a+b)*(c-d));//3
   return 0;
}
