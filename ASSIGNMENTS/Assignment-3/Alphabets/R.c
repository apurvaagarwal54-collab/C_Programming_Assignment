#include <stdio.h>
int main(){
    int i , j;
    for( i = 1 ; i <= 5 ; i++)
    {
        for( j = 1 ; j <= 5 ; j++)
        {
            if( (i == 1 && j != 5)  || 
            (i == 5 && j !=5)  || 
            (j == 1 ) || 
            (j == 5 && (i !=5 && i != 1)))  
            printf("*");
            else
            printf(" ");
        }
             printf("\n");
    }
    i = 1 ; j = 1;
    for( i = 1 ; i <= 4 ; i++)
    {
        for( j = 1 ; j <= i ; j++)
        {
            if( j == 1 || j == i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

return 0;
}