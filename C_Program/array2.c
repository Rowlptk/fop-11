#include<stdio.h>

void main()
{
    int x[10],i, sum = 0,min,max;
    printf("Enter 10 Values : \n");
    for(i=0;i<=9;i++)
    {
        printf("x[%d] = ",i);
        scanf("%d",&x[i]);
    }
    printf("\nThe 10 values are : \n");
    for(i=0;i<=9;i++)
    {
        printf("value %d = %d\n",i+1,x[i]);
    }
    printf("\nThe Even Numbers are : \n");
    for(i=0;i<=9;i++)
    {
        if(x[i]%2 == 0)
        {
            printf("%d ",x[i]);
        }
    }
    printf("\nThe Odd Numbers are : \n");
    for(i=0;i<=9;i++)
    {
        if(x[i]%2 != 0)
        {
            printf("%d ",x[i]);
        }
    }
    min = x[0];
    max = x[0];
    for(i=0;i<=9;i++)
    {
        sum = sum + x[i];
        if(max < x[i])
        {
            max = x[i];
        }
        if(min > x[i])
        {
            min = x[i];
        }
    }
    printf("\nThe Total Sum = %d\n",sum);
    printf("\nMax value = %d\n",max);
    printf("\nMin value = %d\n",min);
}

//filter: even numbers, odd numbers, total sum, maxvalue, minvalue



