// Write C program to read two matrices and perform matrix addition using a 2-D array.
#include <stdio.h>
int main()
{
    int arr1[10][10],arr2[10][10],sum[10][10];
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("Enter element [%d][%d] of first matrix: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("Sum of element [%d][%d]: %d\n",i,j,sum[i][j]);
        }
    }
    return 0;
}