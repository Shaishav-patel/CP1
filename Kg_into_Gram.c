#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the Kilograms amount :");
    scanf("%f",&a);
    b=a*1000;
    printf("%.2fKg =%.2fgram",a,b);
    return 0;
}