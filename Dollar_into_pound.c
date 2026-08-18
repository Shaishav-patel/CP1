#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the Dollar amount :");
    scanf("%f",&a);
    b=a*48;
    c=b/70;
    printf("%.2fDollar =%.2fpound",a,c);
    return 0;
}