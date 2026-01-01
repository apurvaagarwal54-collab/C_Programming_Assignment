//C program to calculate total, average and grade of a student based on marks in three subjects

#include<stdio.h>
char grade(int m1 , int m2, int m3)
{
    int total = m1 + m2 + m3;
    printf("Total marks = %d\n", total);
    float avg = (m1 + m2 + m3) / 3.0;
    printf("Average marks = %.2f\n", avg);
    if(avg >= 90)
        return 'A';
    else if(avg >= 80)
        return 'B';
    else if(avg >= 70)
        return 'C';
    else if(avg >= 60)
        return 'D';
    else
        return 'F';
}
int main()
{
    int m1, m2, m3;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    char g = grade(m1, m2, m3);
    printf("The grade is: %c\n", g);
    return 0;
}