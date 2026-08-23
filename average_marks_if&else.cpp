#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("enter three subject marks:");
    scanf("%f%f%f",&a,&b,&c);
    d=a+b+c;
    e=d/3;
    printf("Your total marks=%.2f\nYour average marks=%.2f\n",d,e);
    if(a<35||b<35||c<35)
        printf("You are \033[31mfail\33[0m");
    else if(e>=70)
        printf("Distinction");
    else if(e>=60)
        printf("First Class");
    else if(e>=50)
        printf("Second Class");

    else
        printf("third Class");
        return 0;

}

