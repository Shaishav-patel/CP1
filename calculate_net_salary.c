#include<stdio.h>
void main()
{
   float a,b,c,e;
   printf("Enter gross salary:");
   scanf("%f",&a);
   b=a*10/100;
   c=a*3/100;
   e=a+b-c;
   printf("Net salary is %.2f",e);
   
    }