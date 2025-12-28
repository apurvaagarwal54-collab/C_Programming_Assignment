#include<stdio.h>
int main()
{ 
    float bal ;
    float i=678,amc=498,bonus=34;
    printf("Enter your initial account balance : ");
    scanf("%f",&bal);
    bal+=i;
 printf("Amount after adding interest :%f\n",bal);
 bal-=amc;
   printf("Amount after subtracting annual maintaience charge :%f\n",bal);
   bal*=bonus;
    printf("Amount after multiplying bonus factor :%f\n",bal);
    bal/=2;
     printf("Final amount :%f\n",bal);
}