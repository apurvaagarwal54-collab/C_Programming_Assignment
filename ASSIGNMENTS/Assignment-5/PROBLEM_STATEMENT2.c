// Write a C program to read a string and check whether it is a palindrome or not.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,len,flg=0;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for(i=0;i<len/2;i++)
    {
        if(str[i] != str[len-1-i])
        {
            flg=1;
            break;
        
        }
    }
    if(flg==1)
        printf("The string is not a palindrome.");
    else
        printf("The string is a palindrome.");
}