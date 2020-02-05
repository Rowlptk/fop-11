#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void login();
void menu();
void checkbalance();
void withdraw();
void deposit();

int total = 6000;
void main()
{
    login();
}

void deposit()
{
    int da;
    printf("Enter Amount to Deposit : ");
    scanf("%d",&da);
    if(da<=10000)
    {
        total = total + da;
        printf("\nDeposited Amount = %d\n",da);
        printf("Total Balance = %d\n",total);
    }
    else
    {
        printf("\nAmount Above 10000 cannot be deposited!\n");
    }
}

void withdraw()
{
    int wa;
    printf("Enter a Withdraw Amount : ");
    scanf("%d",&wa);
    if(wa%500 == 0)
    {
        if(wa<=total)
        {
            if(wa<=5000)
            {
                total = total-wa;
                printf("\nWithdraw Amount = %d",wa);
                printf("\nTotal Balance  = %d\n",total);
            }
            else
            {
                printf("\nAmount Above 5000 cannot be Withdrawn!\n");
            }
        }
        else
        {
            printf("\nInsufficient Balance!\n");
        }
    }
    else
    {
        printf("\nAmount must be multiple of 500\n");
    }
}



void checkbalance()
{
    printf("\nYour Total Balance = %d\n",total);
}

void menu()
{
    int n;
    printf("Press :\n1.Check Balance\n2.Withdraw\n3.Deposit\n4.Exit\n  Choose : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        checkbalance();
        break;
    case 2:
        withdraw();
        break;
    case 3:
        deposit();
        break;
    case 4:
        printf("Exit");
        break;
    default:
        printf("\nInvalid Option\n");
    }
}

void login()
{
    char usr[20], pwd[20];
    printf("Enter Your UserName : ");
    gets(usr);
    printf("Enter Your PassWord : ");
    gets(pwd);
    system("cls");
    if((strcmp(usr,"admin")==0)&&(strcmp(pwd,"123")==0))
    {
        menu();
    }
    else
    {
        printf("\nUsername or password is Incorrect!\n");
    }
}




