//C program to read and display elements of an array

#include<stdio.h>
int main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    printf("Elements of an array are:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}