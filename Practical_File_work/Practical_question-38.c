//C program to sort an array in ascending order using Bubble Sort

#include<stdio.h>
int main()
{
    int arr[100],n,i,pos,flg=0,sv,j,temp;
    printf("Enter the number of elements (max 100): ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    printf("Array before sorting :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Array after sorting in ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}