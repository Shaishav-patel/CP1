#include<stdio.h>
void main()
{
   float a,b,c,d,e;
   printf("Enter Three subject Marks:");
   scanf("%f%f%f",&a,&b,&c);
   d=a+b+c;
   e=(a+b+c)/3;
   printf("The average of the 3 subject Marks is %.2f\nTotal marks=%.2f",e,d);
   
    }