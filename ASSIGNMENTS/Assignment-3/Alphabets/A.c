#include <stdio.h>
int main(){
    int i,j,k,n=5,a=1;
    for( i = 1 ; i <= 5 ; i++)
    {
        for( k = 4; k >= i ; k-- )
        {
            printf(" ");
        }
        for( j = 1 ; j  <= (2*i-1) ; j++)
        {
           if( i == 4 || j == 1 || j == (2*i-1))
            printf("*");
            else
            printf(" ");
        }
        a++;
        printf("\n");
    }
return 0;

}