#include<stdio.h>
// attempt max 3

// functions, structure, file handling
void main()
{
    char usr[20], pwd[20];
    printf("Enter your Username : ");
    gets(usr);
    printf("Enter your Password : ");
    gets(pwd);
    if((strcmp(usr,"admin")==0) && (strcmp(pwd,"123")==0))
    {
        printf("Welcome");
    }
    else
    {
        printf("username or password is incorrect!");
    }
}
