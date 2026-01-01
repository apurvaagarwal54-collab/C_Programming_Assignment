
//C program to calculate factorial of a number using functions
#include<stdio.h>
int fact(int n)
{ int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n,f;
    printf("Enter a number to find factorial: ");
    scanf("%d",&n);
   f= fact(n);
   printf("Factorial of %d is %d\n",n,f);
   return 0;
}