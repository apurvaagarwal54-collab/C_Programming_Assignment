//WAP to calculate the total number of days a student was present in a month (30 days). The user will input 1 if present and 0 if absent for each day.
#include <stdio.h>
int main(){
    int i,attan,count;
    for(i=1;i<=30;i++)
    {
        printf("Day%d:",i);
        scanf("%d",attan);
        if(attan == 1)
        count++;
    }
    printf("Total present days=%d",count);
return 0;
}