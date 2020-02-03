/*2 ==> 2by2 ==> fill ==>

23  44
12  3

13  67
89  90
*/
#include<stdio.h>

void main()
{
    int m1[2][2], m2[2][2],i,j;

    printf("Fill matrix m1 : \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("m1[%d][%d] = ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\nFill matrix m2 : \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("m2[%d][%d] = ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }

    printf("\nAddition of matrix m1 and m2 is : \n\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d\t",m1[i][j]+m2[i][j]);
        }
        printf("\n");
    }
}
















