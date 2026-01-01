//Program to print different patterns using loops
#include <stdio.h>
int main(){
    int i,j,k,a=4;
    printf("RECTANGLE WTIH 7 COLUMN AND 4 ROWS:\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n SQUARE WIITH 4 COLUMN AND 4 ROW:\n");
        for(i=1;i<=4;i++)
         {
        for(j=1;j<=4;j++)
        {
            printf("@ ");
        }
        printf("\n");
    }
    printf("\nRIGHT ANGLE TRIANGLE WITH HEIGHT (5 ROW) AND BASE (5 COLUMNS):\n");
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\nREVERSE RIGRHT ANGLE TRIANGLE WITH 5 ROWS AND 5 COLUMNS:\n");
     for(i=5;i>=1;i--)
    { 
        for(j=1;j<=i;j++)
        {
            printf("$");
        }
        printf("\n");
    }
    printf("\nCENTERED TRIANGLE WITH 5 COLUMNS AND 5 ROWS:\n");
     for(i=1;i<=4;i++)
    {
        for(k=a;k>=1;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        a--;
        printf("\n");
    }
return 0;
}