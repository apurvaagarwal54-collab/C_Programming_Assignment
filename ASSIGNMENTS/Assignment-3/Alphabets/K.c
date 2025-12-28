#include <stdio.h>
int main(){
    int i,j;
    for( i = 7 ; i >= 1 ; i--)
    {
        for( j = 1 ; j <= i ; j++)
        {
            if ( j == 1 || j == i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    i = 1 ; j = 1; 
     for( i = 1 ; i <= 7 ; i++)
    {
        for( j = 1 ; j <= i ; j++)
        {
            if ( j == 1 || j == i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
return 0;
}