/*File Handling:

    file==> is a collection data

    text, binary ==> HDD,secondary storage

.txt, .c, etc ==> text file
.jpg, .docx ==>binary files

text ==> create/open , write/append/read, close
*/
#include<stdio.h>

void main()
{
    FILE *fp;
    char str[100];
    //fp = fopen("demo.txt","a");
    //fprintf(fp," Mango");
   // fprintf(fp,"Hello World!");
    fp = fopen("demo.txt","r");
    if(fp == NULL)
    {
        printf("File Not Found!");
        exit(0);
    }
    while(fscanf(fp,"%s",str) == 1);
    {
        puts(str);
    }
    //puts(str);
    fclose(fp);
}

// w ==> write mode
// a ==> append mode
// r ==> read mode







