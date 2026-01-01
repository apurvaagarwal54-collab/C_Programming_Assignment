// Write a program to accept distance walked by a person for 30 days and find the total distance walked in those 30 days.
#include <stdio.h>
int main(){
    int i;
    float dist,total;
    for(i=1;i<=30;i++)
    {
        printf("Enter distance walked on%d:(km)",i);
        scanf("%f",&dist);
        total+=dist;
    }
    printf("\nTotal distance walked=%f",total);
return 0;
}