#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter the gross salary ");
    scanf("%f",&a);
    if(a>10000)
    {
    b=a*10/100;
    c=a*3/100;
    d=a+b-c;
    printf("net salary is %.2f",d);
    }
    else if(a>5000)
    {
        b=a*7/100;
        c=a*2/100;
        d=a+b-c;
        printf("net salary is %.2f",d);
    }
    else
        printf("Your Salary can not be less than 5000");
    return 0;

}
