#include<stdio.h>
int main()
{
    int i=0,n;
    printf("Enter value of N");
    scanf("%d",&n);
    do
    {
        i++;
        printf("%d ",i);
    }while(i<n);
}
