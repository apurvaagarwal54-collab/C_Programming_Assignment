#include <stdio.h>
int main(){
    int i,j,m;
    for( i = 1; i <=7 ; i++)
    {
             for( m = 1 ; m <= 5 ; m++)
        {
            if( m == 1 || 
                (i == 1 && m < 5 ) || 
                (i == 4 && m < 5) || 
                (m == 5 && (i != 1 && i != 4 && i != 7)) || 
                (i == 7 && m < 5))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
return 0;
}