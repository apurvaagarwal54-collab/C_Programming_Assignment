//C program to search for an element in an array using Linear Search

#include<stdio.h>
int main()
{
    int arr[100],n,i,pos,flg=0,sv;
    printf("Enter the number of elements (max 100): ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    printf("Enter search value :");
    scanf("%d",&sv);
    for(i=0;i<n;i++)
    {
        if(arr[i]==sv)
        {
            flg=1;
            pos=i;
            break;
        }
    }
    if(flg==1)
    {
        printf("Element %d found at position %d\n",sv,pos);
    }
    else
    {
        printf("Element %d not found in the array\n",sv);
    
}
    return 0;
}