//WAP to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int year; 
    printf("Enter a year:");
    scanf("%d",&year);
    if((year % 4 ==0 || year % 400 ==0) && (year % 100 !=0))
    printf("Leap year:%d\n",year);
    else
    printf("Not Leap year:%d\n",year);
    return 0;
}