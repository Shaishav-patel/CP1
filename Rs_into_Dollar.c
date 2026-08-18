#include<stdio.h>
int main()
{
    float a,b;
    printf("enter the Rupees amount :");
    scanf("%f",&a);
    b=a/48;
    printf("%.2fRs =%.2fDollar",a,b);
    return 0;
}