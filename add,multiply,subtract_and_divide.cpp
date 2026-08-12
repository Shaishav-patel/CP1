#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    printf("enter two numbers:");
    scanf("%f%f",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("%f+%f=%f\n%f-%f=%f\n%f*%f=%f\n%.2f/%.2f=%f\n",a,b,c,a,b,d,a,b,e,a,b,f);
    return 0;

}
