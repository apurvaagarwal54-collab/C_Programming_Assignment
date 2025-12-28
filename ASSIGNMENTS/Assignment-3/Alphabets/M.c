#include <stdio.h>
int main(){
    int i ,j,k,a=12,m;
    for( i = 1 ; i <= 7 ; i ++)
    {
        for( j =1 ; j <= i ; j++)
        {
            if( j == 1 || j == i )
            printf("*");
            else
            printf(" ");
        }
        for( k = a ; k >= 1 ; k--)
        {
            printf(" ");
        }
        for( m = i ; m >= 1 ; m-- )
        {
            if( m == 1 || m == i )
            printf("*");
            else 
            printf(" ");
        }
        a-=2;
        printf("\n");
    }
return 0;
}