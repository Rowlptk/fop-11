//number 3
//but 9
//3,6,12,15,21...
#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //18==>18%3==>0, 18%9==>0
    if(n%3 == 0)
    {
        if(n%9!=0)
        {
            printf("%d is a mutiple of 3 but not multiple of 9",n);
        }
        else
        {
            printf("%d is a multiple of 9",n);
        }
    }
    else
    {
        printf("%d is not a multiple of 3",n);
    }
}

1000-9999 ==> valid year
1-12 ==>
1-30 ==>




