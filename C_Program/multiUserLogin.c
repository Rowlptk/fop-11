#include<stdio.h>
#include<string.h>

void main()
{
    char susr[5][20] = {"admin", "thor", "hulk", "captain", "tony"};
    char spwd[5][20] = {"admin", "thor123", "h@123","c@123","stark"};
    char usr[20], pwd[20];
    int i, flag = 0;
    printf("Enter your username : ");
    gets(usr);
    printf("Enter your password : ");
    gets(pwd);

    for(i=0;i<=4;i++)
    {
        if(strcmp(usr,susr[i])==0)
        {
            //printf("Matched");
            flag = 1;
            break;
        }
    }
    if((flag == 1)&&(strcmp(pwd,spwd[i])==0))
    {
        printf("Matched!");
    }
    else
    {
        printf("Username or password is incorrect!");
    }
    //printf(" %d",i);
}


