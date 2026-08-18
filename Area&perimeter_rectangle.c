#include<stdio.h>
void main()
{
   float a,b,c,d;
   printf("Enter Rectangle Length &width:");
   scanf("%f%f",&a,&b);
   c=a*b;
   d=2*(a+b);
   printf("Rectangle area=%.2f\nRectangle perimeter=%.2f",c,d);
   
    }