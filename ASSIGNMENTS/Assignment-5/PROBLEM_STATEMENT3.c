// Write a C program to count the number of words in a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int i,len,c=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len= strlen(str);
    for(i=1;i<len;i++)
    {
        if(str[i]==' ' && str[i-1]!=' ')
            c++;
    }
    printf("Number of words in the string: %d", c+1);
    return 0;
}