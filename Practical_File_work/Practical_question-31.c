//C program to find the maximum of two numbers using pointers

#include<stdio.h>
int max(int *a,int *b)
{
    if(*a>*b)
    return *a;
    else
    return *b;
}

int main()
{
    int x,y,*ptr;
    printf("Enter 2 numbers :");
    scanf("%d %d",&x,&y);
    *ptr = max(&x,&y);
    printf("Maximum value = %d",*ptr);
    return 0;
}