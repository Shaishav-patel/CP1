#include<stdio.h>
void main()
{
   float a,b,c;
   printf("Enter gross sales:");
   scanf("%f",&a);
   b=a*10/100;
   c=a-b;
   printf("Net sales is %.2f",c);
   
    }