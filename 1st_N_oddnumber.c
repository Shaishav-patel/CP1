#include<stdio.h>
int main()
{
    int i=-1,n;
    printf("Enter value of N ");
    scanf("%d",&n);
    do
    {
        i=i+2;
        printf("%d ",i);
    }while(i<n);
    return 0;
}
