#include<stdio.h>

void main()
{
    int y;
    printf("Enter a Year : ");
    scanf("%d",&y);
    if((y%400 == 0)||((y%4 == 0) && (y%100 != 0)))
    {
        printf("%d is a leap Year",y);
    }
    else
    {
        printf("%d is not a leap Year",y);
    }
}


2019-12-31
2020-04-31

using nested if condition.

switch.. case ==> character\

loop ==> 2 days







