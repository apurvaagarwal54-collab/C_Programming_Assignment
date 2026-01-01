//WAP to calculate total electricity units used in a week.
#include <stdio.h>
int main(){
    int i,unit,total;
    for(i=1;i<=7;i++)
    {
        printf("Enter unit used on day%d:",i);
        scanf("%d",&unit);
        total+=unit;
    }
    printf("Total electricity units used in a week=%d",total);
return 0;
}