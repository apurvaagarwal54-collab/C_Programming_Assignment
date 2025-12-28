#include <stdio.h>
int main(){
    int i,j,k,l,m,n,o,x,y,z;
    for( i = 1 ; i <= 7 ; i++)  // A
    {
        for( k = 7 ; k >= i ; k--)
        {
            printf(" ");
        }
        for( j = 1 ; j <= (2*i-1) ; j++)
        { 
            if ( j == 1 || j == (2*i-1) || i == 4)
            printf("*");
            else
            printf(" ");
        }
          printf("\t");
            for( n = 1 ; n <=7 ; n ++)       //p
            {
                if( n == 1 || (n ==7 && ( i != 1 && i !=5 && i !=6 && i != 7)) || (i == 4 && n != 7 ) || (i == 1 && n !=7))
                printf("*");
                else
                printf(" ");
            }
        printf("\t");
        for(m=1;m<=5;m++)      //u
        {
            if(i==7 || m==1|| m==5)
            printf("*");
            else
            printf(" ");
        }
        printf("\t");
        for(l=1;l<=4;l++)     //R
        {
            if(l==1||(l==4 && i<4)|| (i==1 )||(i==3)|| (i==5 && l==2)||(i==6 && l==3) || (i==7 && l==4))
          {  printf("*");
          }
            else
            {
            printf(" ");
            }
        } 
        printf("\t");
        for(o=1;o<=i;o++)        //v
        {
            printf(" ");
        }
        for(x=8;x>=i;x--)
        {
            if(x==8 || x==i)
            printf("* ");
            else
            printf("  ");
        }
    
         for( y = 7; y >= i ;y--)     //A
        {
            printf(" ");
        }
        for( z = 1 ; z <=(2*i-1) ; z++)
        { 
            if ( z == 1 || z ==(2*i-1) || i == 4)
            printf("* ");
            else
            printf("  ");
        }
        
        printf("\n");
    }
    return 0;
}