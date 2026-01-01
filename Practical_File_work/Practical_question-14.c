//WAP to check whether a given character is an alphabet, digit or special character.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character or a digit or a special character:");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    printf("Alphabet:");
    else if(ch>= '1' && ch<= '9')
    printf("Digit:");
    else
    printf("Special Character:");
    return 0;
}