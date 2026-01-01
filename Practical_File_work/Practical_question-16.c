//WAP to display the traffic signal color according to the user input.
#include<stdio.h>
int main()
{
    int ch;
    printf("Enter 1: for Red\n Enter 2: for Yellow \n Enter 3: for Green:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Red --> Stop");
        break;
         case 2:
        printf("Yellow --> Ready");
        break;
         case 3:
        printf("Green --> Go");
        break;
        default:
        printf("Invalid Input:");
    }
    return 0;
}