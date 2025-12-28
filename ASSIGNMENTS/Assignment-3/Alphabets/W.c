#include <stdio.h>
int main(){
    int i , j , k , a = 0 , l;
    for( i = 7 ; i >= 1 ; i--)
    {
        for( j = 1 ; j <= i ; j++ )
        {
            if( j == 1 || j == i)
            printf("*");
            else
            printf(" ");
        }
        for ( k = 1 ; k <= a ; k++)
        {
            printf(" ");
        }
        for ( l = i ; l >=1 ; l -- )
        { 
            if( l == i || l == 1)
            printf("*");
            else
            printf(" ");
        }
        a+=2;
        printf("\n");
    }
return 0;
}