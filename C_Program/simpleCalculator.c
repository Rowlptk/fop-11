//'+'. Add, '-'Sub, '*' Mul, '/' Div, invalid
#include<stdio.h>

void main()
{
    float n1,n2;
    char ch;
    printf("Enter Two Numbers : ");
    scanf("%f%f",&n1,&n2);
    printf("Press : \n+ to Add\n- to Sub\n* to Mul\n/ to Div\n  Select :");
    scanf(" %c",&ch);
    switch(ch)
    {
    case '+':
        printf("%.2f + %.2f = %.2f",n1,n2,(n1+n2));
        break;
    case '-':
        printf("%.2f - %.2f = %.2f",n1,n2,(n1-n2));
        break;
    case '*':
        printf("%.2f * %.2f = %.2f",n1,n2,(n1*n2));
        break;
    case '/':
        printf("%.2f / %.2f = %.2f",n1,n2,(n1/n2));
        break;
    default:
        printf("Invalid Symbol");
    }
}
