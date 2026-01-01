// PROBLEM STATEMENT: FIND THE LARGEST AMONG THREE NUMBERS
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
     printf("Enter second number:");
    scanf("%d",&b);
     printf("Enter thrid number:");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("Greatest Number:%d\n",a);
    else if(b>a && b>c)
    printf("Greatest Number:%d\n",b);
    else
     printf("Greatest Number:%d\n",c);
     return 0;
}