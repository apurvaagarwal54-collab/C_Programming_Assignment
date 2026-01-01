//WAP to calculate the total bill amount for 5 items purchased in a store.
#include<stdio.h>
int main()
{
    int i,price;
    float total;
    for(i=1;i<=5;i++)
    {
        printf("Enter price of item%d:",i);
        scanf("%d",&price);
        total+=price;
    } 
    printf("\n\n\n\nTotal bill=%0.2f",total);
    return 0;
}