#include<stdio.h>

void main()
{
    int ary[5] = {4,8,10,0,-6};
    printf("Before : ary[2] = %d",ary[2]);

    ary[2] = 19;
    printf("\nAfter : ary[2] = %d",ary[2]);

    printf("\nChange value of ary[2] to ");
    scanf("%d",&ary[2]);
    printf("\nUsing Scanf : ary[2] = %d",ary[2]);

}
