#include <stdio.h>
int main(){
    int i , j , k  , a=4 ;
    for( i = 1 ; i <= 7 ; i++)
    {
        for( j = 1 ; j <= 7 ; j++)
        {
            if( (i == 1  && ( j != 1 && j != 7))|| 
            (i == 7 && (j != 1 && j != 7 && j !=4 )) || 
            (j == 1 && (i !=1 && i !=7)) || 
            (j == 7 &&(i != 1 && i != 7) ))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    i = 1 ; j = 1;
    for( i = 1 ; i <= 2 ; i++)
    {
        for( k = 1 ; k <= a ; k++)
        {
            printf(" ");
        }
        for( j = 1 ; j <= i ; j++)
        {
            if( j == i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
return 0;
}