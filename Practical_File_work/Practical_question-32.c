//C program to perform arithmetic operations using pointers
#include<stdio.h>
 
void Calculate(int *a,int *b)
{

    printf("Sum of two numbers = %d\n",*a+*b);
    printf("Difference of two numbers = %d\n",*a-*b);
    printf("Product of two numbers :%d\n",*a * *b);
    if(*b==0)
    printf("division not possible\n");
    else
    printf("Division of two numbers :%d\n",*a / *b);
}

int main()
{
    int x,y;
    printf("Enter 2 number :");
    scanf("%d %d",&x,&y);
    Calculate(&x,&y);
    return 0;
}