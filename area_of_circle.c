#include<stdio.h>
int main()
{
    float a,b; //a is the radius & b as area
    printf("Enter Radius of the circle:");
    scanf("%f",&a);
    b=22/7*a*a;
    printf("Area of the circle is %.2f",b);
    return 0;
    }