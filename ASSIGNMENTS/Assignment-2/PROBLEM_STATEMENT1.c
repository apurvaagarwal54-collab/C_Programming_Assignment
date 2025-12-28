#include <stdio.h>
int main()
{
    char name[100];
    float  bs,hra,da,gs ,tax,sal;
    printf("Enter name of the employee:");
    scanf("%s",name);
    printf("Enter basic salary :");
    scanf("%f",&bs);
    hra=0.2*bs;
    da=0.1*bs;
    gs=bs+hra+da;
    tax=0.05*gs;
    sal=gs-tax;
     printf("Employee name : %s\n",name);
    printf("Basic Salary : %f\n",bs);
    printf("House rent allowance : %f\n",hra);
    printf("Dearness allowance:%f\n ",da);
    printf("Gross Salary : %f\n",gs);
    printf("Income Tax : %f\n",tax);
    printf("Net Salary : %f\n ",sal);
    return 0;
}