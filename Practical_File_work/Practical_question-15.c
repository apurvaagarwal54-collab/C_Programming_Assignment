// PROBLEM STATEMENT: ELECTRICITY BILL
#include<stdio.h>
int main()
{
    int unit;
    double rate;
    printf("Enter units:");
    scanf("%d",&unit);
    if(unit<=100)
    rate=3*unit;
    else if(unit>100 && unit<=200)
    rate=4*unit;
    else
    rate=5*unit;
    if(rate>1000)
    rate+=(rate*0.1);
    printf("Bill Amount:%lf",rate);
    return 0;
}