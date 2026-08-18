#include<stdio.h>
void main()
{
   int a,b,c;
   printf("Enter Two numbers:\na&b");
   scanf("%d%d",&a,&b);
   c=a+b;
   a=c-a;
   b=c-b;
   printf("swapped numbers\na=%d b=%d",a,b);
   
    }