//C program to calculate factorial of a number using pointer

#include<stdio.h>

int factorial(int *a)
{
    int i;
    long fact=1;
    for(i=1;i<=*a;i++)
    fact=fact*i;
    return fact;
}

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int f = factorial(&n);
    printf("Factorial = %d",f);
    return 0;
}