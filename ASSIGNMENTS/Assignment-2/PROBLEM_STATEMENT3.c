
#include<stdio.h>
#include<string.h>
int main()
{
    const char user_name []= "Admin" ;
    const char pass[]="1234";
    char u[10];
    char p[10];
    int  v,s;
    printf("Enter User Name : ");
    scanf("%s",u);
    printf("Enter password :");
    scanf("%s",p);
    s=(strcmp(u,user_name)==0);
    v=(strcmp(p,pass)==0);
        if(s && v){
        printf("Login Successful !! ");}
        
        else{
        printf("Invalid Login !! ");
        }

return 0;

}
