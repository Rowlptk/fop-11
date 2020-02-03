#include<stdio.h>

void main()
{
    char str[100] = "Apple";
    char ch = 'A';
    printf("%s\n%c\n",str,ch);
    printf("Replace Apple With : ");
    //scanf("%s",str);
    gets(str);
    puts(str);

    ch = getchar();
    putchar(ch);
    //printf("%s",str);
}
