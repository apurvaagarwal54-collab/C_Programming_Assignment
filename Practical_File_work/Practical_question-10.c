// PROBLEM STATEMENT: CHECK EVEN OR ODD.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num % 2 == 0)
    printf("Even number:%d\n",num);
    else  
    printf("Odd number:%d",num);
    return 0;
}