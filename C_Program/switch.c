//switch... case

#include<stdio.h>
next day ==> switch characters, loop ==>while, do.. while, for ==> patterns(nesting)
void main()
{
    int n;
    printf("Enter a day number : ");
    scanf("%d",&n);
    switch(n)
    {
    case 8:
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid Day!");
    }
}





