
#include <stdio.h>
int main(){
    int i , j , k, a=5;
    for( i = 1 ; i <= 8 ; i++)
    {
        for( k = 1 ; k <= i ; k ++ )
        {
            printf(" ");
        }
        for( j = 8 ; j >= i ; j --)
        {
            if ( j == i || j == 8)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    i = 1 ; j = 1 , k = 1;
    for( i = 1 ; i <= 5 ; i++)
    {
        for ( k = 1 ; k <= a ; k++)
        {
            printf(" ");
        }
        for( j = 1 ; j <= 4 ; j++)
        { 
            if ( j == 4 )
            printf("*");
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}
