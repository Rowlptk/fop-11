#include<stdio.h>

struct bookStore
{
    char name[30];
    float price;
    int pages;
    char block;

}b1,b2,b[5];


void main()
{
    int i,n,flag=0;
    char book[30];
    printf("Number of Entry : ");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        printf("Enter Book %d Name : ",i+1);
        gets(b[i].name);
        printf("Enter Book %d Price : ",i+1);
        scanf("%f",&b[i].price);
        printf("Enter Book %d Pages : ",i+1);
        scanf("%d",&b[i].pages);
        printf("Enter Book %d Block : ",i+1);
        scanf(" %c",&b[i].block);
        getchar();
        printf("\n");
    }
    // Book Search by name
    printf("\nEnter A Book Name to View : ");
    gets(book);
    for(i=0;i<n;i++)
    {
        if(strcmp(book, b[i].name)==0)
        {
            printf("\n******************Book %d********************\n",i+1);
            printf("Name = %s\nPrice = $%.2f\nPages = %d\nBlock = %c\n"
                ,b[i].name,b[i].price,b[i].pages,b[i].block);
            printf("********************************************\n\n");
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("\nBook Not Found!\n");
    }

    // file handling ==> file open, read, write, close, search,







    /*for(i=0;i<n;i++)
    {
        printf("\n******************Book %d********************\n",i+1);
        printf("Name = %s\nPrice = $%.2f\nPages = %d\nBlock = %c\n"
           ,b[i].name,b[i].price,b[i].pages,b[i].block);
        printf("********************************************\n\n");
    }*/
}







