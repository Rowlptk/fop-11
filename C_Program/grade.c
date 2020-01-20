#include<stdio.h>

void main()
{
    int m;
    printf("Enter your full Mark : ");
    scanf("%d",&m);
    if(m>=80 && m<=100)
    {
        printf("Congratulations! you got Grade A!");
    }
    else if(m>=60 && m<80)
    {
        printf("Grade B!");
    }
    else if(m>=40 && m<60)
    {
        printf("Grade C!");
    }
    else if(m>=0 && m<40)
    {
        printf("Sorry! You Failed!");
    }
    else
    {
        printf("Invalid Marks!");
    }
}

2020-02-29
2019-02-29

1700 leap year

1600 1700 1800 1900 2000

even numbers ==> 8%2 ==> 0 ==> n%2 == 0

if((y%400 == 0)||((y%4 == 0) && (y%100 != 0)))
{
    printf("This is a leap Year");
}
else
{
    printf("Not a leap Year");
}

4|2020|505
  2020
  ----
  0
100|2020|20
    2000
    ----
    20







