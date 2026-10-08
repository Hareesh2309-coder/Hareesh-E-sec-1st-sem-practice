#include<stdio.h>
int main()
{
   float price=1000,discount=20;
   printf("product price=%f\n",price);
   printf("discount percentage=%f\n",discount);
   printf("final bill=%f\n",price-(price*discount)/100);
   return 0;
}
