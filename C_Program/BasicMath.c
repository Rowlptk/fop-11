#include<stdio.h>

void main()
{
    int num1, num2, sum;
    // & ==> address of
    //num1 = 2098;
    //num2 = 3334;
    printf("Enter First Number : ");
    scanf("%d",&num1);
    printf("Enter Second Number : ");
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("The Sum is %d\n",sum);

    printf("%d + %d = %d\n",num1,num2,sum);
    printf("%d + %d = %d",num1,num2,(num1+num2));
}
// operators ==> programiz.com
/*output:
2 + 3 = 5
num1+num2 = sum
*/


