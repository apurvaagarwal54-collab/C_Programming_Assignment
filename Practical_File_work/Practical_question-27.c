//C program to find the square of a number using functions

#include<stdio.h>
int square(int n)
{
    return(n*n);
}

int main()
{
    int n,sq;
    printf("Enter a number to find its square: ");
    scanf("%d",&n);
    sq= square(n);
    printf("Square of %d is %d\n",n,sq);
    return 0;
}