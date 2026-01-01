
//C program to swap two numbers using call by reference
#include<stdio.h>
void swap( int *a , int *b)
{
    *a = *a+*b;
    *b= *a-*b;
    *a-=*b;
    
}
int main()
{
    int x,y;
    printf("Enter two numbers :");
    scanf("%d %d",&x,&y);
    printf("Numbers before swapping:\n ");
    printf("X= %d \n Y= %d\n",x,y);
    swap(&x,&y);
    printf("Numbers after swapping:\n ");
    printf("X= %d \n Y= %d\n",x,y);
 return 0;


}