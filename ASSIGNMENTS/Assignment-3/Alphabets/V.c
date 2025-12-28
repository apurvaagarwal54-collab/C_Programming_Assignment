
  #include<stdio.h>
  int main() {
      int j, k, i;

      for(i=1; i<=7; i++)
      {
          for(j=1; j<=i; j++)
              printf(" ");
         for(k=8; k>=i; k--)
         {
             if(k==8 || k==i)
                 printf("* ");
             else
                 printf("  ");
         }
         printf("\n");
    }
 }
