#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void login();
void menu();
void checkbalance();
void withdraw();
void deposit();
void proceed();
int read();
void write(int n);

//int total = 6000;
void main()
{
    login();
}

void write(int n)
{
    FILE *fp;
    fp = fopen("balance.txt","a");
    fprintf(fp,"\n%d",n);
    fclose(fp);
}



int read()
{
    FILE *fp;
    int n;
    fp = fopen("balance.txt","r");
    if(fp == NULL)
    {
        printf("Internal Error!");
        exit(0);
    }
    while(fscanf(fp,"%d",&n)==1);
    fclose(fp);
    return n;
}
void proceed()
{
    char ch;
    printf("Press Y to continue...\nN to Quit...\n  ");
    scanf(" %c",&ch);
    system("cls");
    if(ch=='Y' || ch=='y')
    {
        menu();
    }
    else if(ch=='N' || ch == 'n')
    {
        exit(0);
    }
    else
    {
        proceed();
    }
}



void deposit()
{
    int da;
    int n = read();
    printf("Enter Amount to Deposit : ");
    scanf("%d",&da);
    if(da<=10000)
    {
        n = n + da;
        printf("\nDeposited Amount = %d\n",da);
        printf("Total Balance = %d\n",n);
        write(n);
    }
    else
    {
        printf("\nAmount Above 10000 cannot be deposited!\n");
    }
}

void withdraw()
{
    int wa;
    int n= read();
    printf("Enter a Withdraw Amount : ");
    scanf("%d",&wa);
    if(wa%500 == 0)
    {
        if(wa<=n)
        {
            if(wa<=5000)
            {
                n = n-wa;
                printf("\nWithdraw Amount = %d",wa);
                printf("\nTotal Balance  = %d\n",n);
                write(n);
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
    printf("\nYour Total Balance = %d\n",read());
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
        exit(0);

    default:
        printf("\nInvalid Option\n");
    }
    proceed();
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




