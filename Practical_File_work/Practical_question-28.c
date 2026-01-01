//C program to find the maximum of three numbers using functions

#include<stdio.h>
void max(int a, int b, int c)
{
    if(a>b && b>c)
    {
        printf("Maximum number = %d\n",a);

    }
    else if(b>a && b>c)
    {
        printf("Maximum number = %d\n",b);
    }
    else
    {
        printf("Maximum number = %d\n",c);
    }
}
int main()
{
    int a,b,c;
    printf("Enter three numbers to find the maximum among them: ");
    scanf("%d %d %d",&a,&b,&c);
    max(a,b,c);
    return 0;
}