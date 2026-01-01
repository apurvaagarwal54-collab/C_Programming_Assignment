#include<stdio.h>
int main()
{
    int  arr[50],i,sum=0,n;
    float avg;
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("Sum=%d\nAverage=%.2f",sum,avg);
}