//WAP to display number of days in a month using switch case.
#include<stdio.h>
int main()
{
    int ch;
    printf("Enter 1: for Janurary\n Enter 2: for Feburary \n Enter 3: for March \n Enter 4: for April \n Enter 5: for May \n Enter 6: for June \n Enter 7: for July \n Enter 8: for August \n Enter 9: for September \n Enter 10: for October \n Enter 11: for November\n Enter 12: for December \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Janurary: No of Days --->31");
        break;
         case 2:
        printf("February: No of Days --->28");
        break;
         case 3:
        printf("March: No of Days --->31");
        break;
         case 4:
        printf("April: No of Days --->30");
        break;
         case 5:
        printf("May: No of Days --->31");
        break;
         case 6:
        printf("June: No of Days --->30");
        break;
         case 7:
        printf("July: No of Days --->31");
        break;
         case 8:
        printf("August: No of Days --->31");
        break;
         case 9:
        printf("September: No of Days --->30");
        break;
         case 10:
        printf("October: No of Days --->31");
        break;
         case 11:
        printf("November: No of Days --->30");
        break; 
        case 12:
        printf("December: No of Days --->31");
        break;
        default:
        printf("Invalid");
    }
    return 0;
}