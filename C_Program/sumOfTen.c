//1+2+3+4+5+6+7+8+9+10 ==> 55
#include<stdio.h>

void main()
{
    int i, sum = 0;
    for(i=1;i<=10;i++)
    {
        sum = sum + i;
        if(i<=9){
            printf("%d + ",i);
        }
        else{
            printf("%d = ",i);
        }
    }
    printf("%d",sum);
    //printf("The Total sum is %d",sum);
}


table==> 2 x 1 = 2



