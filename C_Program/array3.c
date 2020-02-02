#include<stdio.h>
// sum of two matrix
// transpose of matrix
// string, string functions
void main()
{
    int m1[3][3],i,j;
    printf("Fill first 3x3 Matrix : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("m1[%d][%d] = ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

}
