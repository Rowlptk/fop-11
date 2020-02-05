#include<stdio.h>

// basic transaction program ==> balance check, withdraw, deposit, exit
// login ==> menu
// 500, x<total, x<5000
// 10000
// do you continue..

//parameter less function
void add(); // function declaration
// parameterized function
void sum(int x, int y);
int sumOne(int x, int y);

void main()
{
    int num;
    //add(); // function call
    //add();
    //sum(100,23);
    num = sumOne(12,13);
    printf(" %d ",num);
    printf(" %d ",sumOne(50,98));
}
int sumOne(int x, int y)
{
    return (x+y);
}

void sum(int x, int y)
{
    printf("%d + %d = %d",x,y,(x+y));
}


// function definition
void add()
{
    int n1, n2;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1, &n2);
    printf("%d + %d = %d\n",n1,n2,(n1+n2));
}
