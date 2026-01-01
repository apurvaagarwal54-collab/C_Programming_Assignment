// Write a program to display multiplication table of a number entered by user. The program should continue to run until user enters 0 to exit.
#include <stdio.h>
int main(){
    int i , n , n1;
    do{
         printf("Enter 1 for multiplication table and 0 for exit:");
    scanf("%d",&n);
    if( n == 1)
    {
        printf("Enter a number for which multiplication you want:");
        scanf("%d",&n1);
        for( i = 1 ; i <= 10 ; i++)
        {
            printf("%d * %d = %d\n",n1,i,(i*n1));
        }
    }
    if( n == 0)
    {
        break;
    }
    }
    while(1);
return 0;
}