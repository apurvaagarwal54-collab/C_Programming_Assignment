
#include<stdio.h>
int main()
{
    int c=10,res;
    res=c++;
    printf("c++ --> %d \n",res);
    res=c--;
     printf("c-- --> %d \n",res);
    res=++c;
    printf("++c  -->%d \n",res);
    res=--c;
    printf("--c -->%d \n",res);
    return 0;
}
