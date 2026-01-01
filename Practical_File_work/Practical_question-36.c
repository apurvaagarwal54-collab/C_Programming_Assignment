//C program to delete an element from an array at a specified position

#include<stdio.h>
int main()
{
    int arr[100],n,i,pos;
    printf("Enter the number of elements (max 100): ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    printf("Elements of the array are:\n");
     for(i=0;i<n;i++)
        {
            printf("%d\n",arr[i]);
        }
    printf("Enter the position to delete element :");
    scanf("%d",&pos);
    if(pos<0 || pos>=n)
    {
        printf("Invalid position!\n");
    }
    else
    {
        for(i=pos;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--; 
        printf("Array after deletion:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}