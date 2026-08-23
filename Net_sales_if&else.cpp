#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter Gross sales:");
    scanf("%f",&a);
    if(a>20000)
    {
    b=a*15/100;
    c=a-b;
    printf("Net sales=%.2f",c);
    }
    else if(a>10000)
    {
    b=a*10/100;
    c=a-b;
    printf("Net sales=%.2f",c);
    }
    else
    {
    b=a*5/100;
    c=a-b;
    printf("Net sales=%.2f",c);
    }
    return 0;
}
