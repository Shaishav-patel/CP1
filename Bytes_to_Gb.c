#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the bytes amount :");
    scanf("%d",&a);
    b=a/1024;
    c=b/1024;
    d=c/1024;
    printf("%dbytes=%dKb\n%dKb=%dMb\n%dMb=%dGb\n%dbytes=%dKb=%dMb=%dGb",a,b,b,c,c,d,a,b,c,d);
    return 0;
}