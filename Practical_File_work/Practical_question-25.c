// Write a program to display the weekly schedule of lectures for a student. The program should print the day of the week and the corresponding lectures scheduled for that day. Assume the student has different number of lectures on different days.
#include <stdio.h>
int main(){
    int i,j;
    for( i = 1 ; i <=7 ;i++)
    {
        if ( i == 1)
        printf("Monday\n");
        if ( i == 2)
        printf("\nTuesday\n ");
        if ( i == 3)
        printf("\nWednesday\n ");
        if ( i == 4)
        printf("\nThrusday\n");
        if ( i == 5)
        printf("\nFriday\n");
        if ( i == 6)
        printf("\nSaturday\n");
        if ( i == 7 )
        {
            printf("\nSunday\n ");
            break;
        }
        for ( j = 1 ; j <= 6 ; j++)
        {
            if( i == 3 )
            {
                if( j <= 4)
            printf("\nLecture %d " , j);
            }
            else if( i == 6)
            {
                if( j <= 2)
            printf("\nLecture %d" , j);
            }
            else
            printf("\nLecture %d" , j);
        }
    }
return 0;
}