#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three values:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("largest value is %d\nShortet value is %d",a,c);
            else if (b<c)
                printf("largest value is %d\nShortet value is %d",c,b);
        else
            printf("largest value is %d\nShortet value is %d",c,a);
    }
    else if(a<b)
    {
        if(b>c)
            printf("largest value is %d\nShortet value is%d",b,c);
            else if(a<c)
                printf("largest value is %d\nShortet value is %d",c,a);
        else
            printf("largest value is %d\nShortet value is%d",c,b);
    }
    else
    {
        if(a>c)
            printf("largest value is %d and %d\nShortet value is%d",a,b,c);
        else
            printf("largest value is %d\nShortet value is%d and %d",c,a,b);
    }
    return 0;

}
