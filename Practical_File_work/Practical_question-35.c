//C program to calculate the sum of array elements in reverse order

#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    printf("Enter the number of elements (max 100): ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        sum+=arr[i];
    }
    printf("Sum of array elements is: %d\n",sum);
    return 0;
}