#include<stdio.h>
int main()
{
    float a,b;
    printf("enter the Dollar amount :");
    scanf("%f",&a);
    b=a*48;
    printf("%.2fDollar =%.2fRs",a,b);
    return 0;
}