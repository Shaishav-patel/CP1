#include<stdio.h>
int main()
{
    float a,b,c;//a is height of triangle & b is length of triangle 
    printf ("Enter Height& Length of the Triangle:");
    scanf("%f%f",&a,&b);
    c=a*b/2;
    printf ("Area of the Triangle is %.2f\n",c);
    return 0;
    }