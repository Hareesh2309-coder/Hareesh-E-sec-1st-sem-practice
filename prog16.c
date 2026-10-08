#include<stdio.h>
int main()
{
   float price;
   int percentage;
   scanf("%f\n",&price);
   printf("pricr=%f\n",price);
   scanf("%d\n",&percentage);
   printf("percentage=%d\n",percentage);
   printf("discount=%f\n",(percentage/100)*price);
   return 0;
   }
