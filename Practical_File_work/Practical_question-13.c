//WAP to read marks of a student and display the grade according to the following criteria:
//Marks        Grade
// 90 and above    A
// 75 to 89        B
// 50 to 74        C
// below 50       F
#include<stdio.h>
int main()
{
    int marks;
    char grade;
    printf("Enter marks of the Student:");
    scanf("%d",&marks);
    if(marks >= 90)
    grade='A';
    else if(marks >= 75 && marks < 90)
    grade='B';
    else if(marks >= 50 && marks < 75)
    grade='C';
    else
    grade='F';
    printf("Grade:%c",grade);
    return 0;
}