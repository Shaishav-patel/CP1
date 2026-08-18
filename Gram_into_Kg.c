#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the Grams amount :");
    scanf("%f",&a);
    b=a/1000;
    printf("%.2fGram =%.2fKg",a,b);
    return 0;
}