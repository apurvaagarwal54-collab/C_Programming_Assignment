#include <stdio.h>
int main(){
    int i,j,k;
    for( i = 1 ; i <= 7 ; i++)
    {
        for( j = 1 ; j <= 7 ; j ++)
        {
            if( j == 1 ||  i ==  1 || i == 7 || 
            ( j == 7 && ( i != 2 && i != 3 && i != 4 )))
            printf("*");
            else
            printf(" ");
        }
        for( k = 1 ; k <= 7 ; k++)
        {
            if( (i == 4 && k < 7) || 
            ( k == 7 && (i !=1 && i != 2 && i != 3 && i != 4)))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
return 0;
}