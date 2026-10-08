#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   printf("integer:%d\n",a);//8
   printf("%d\n",a++);//8
   printf("%d\n",++a);//10
   printf("%d\n",a--);//10
   printf("%d\n",--a);//8
   return 0;
}
