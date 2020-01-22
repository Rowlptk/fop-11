#include<stdio.h>

void main()
{
    int y,m,d;
    printf("Enter a Date[yyyy-mm-dd] : ");
    scanf("%d-%d-%d",&y,&m,&d);
    printf("Year = %d\nMonth = %d\nDay = %d",y,m,d);
    if(y>=1000 && y<=9999)
    {
        if(m>=1 && m<=12)
        {
            if(d>=1 && d<=30)
            {
                printf("Date is Valid!");
            }
            else
            {
                printf("Day is Invalid!");
            }
        }
        else
        {
            printf("Month is Invalid!");
        }
    }
    else
    {
        printf("Year is Invalid!");
    }
}
