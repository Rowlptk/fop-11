#include<stdio.h>
#include<string.h>

//strlen ==> int
//strrev ==> reverse permanently
// strlwr, strupr ==> case change
// strcpy(str1, str2)
// strcat(str1, str2)
/* strcmp(str1, str2);
0 ==> both equal
-ve ==> right is greater
+ve ==> left is greater

ASCII
ACC
ABC
*/

void main()
{
    char str[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str1[20] = "Apple";
    char str2[20] = "Mango";

    strcat(str1, str2);
    //strcpy(str1, str2);
    puts(str1);
    puts(str2);


    printf("The Length of str = %d\n",strlen(str));
    printf("The Reverse of str = %s\n",strrev(str));
    printf("The Lowercase of str = %s\n",strlwr(str));
    printf("The Upperrcase of str = %s\n",strupr(str));
    //str = "Apple";
    //strcpy(str,"Apple");
    puts(str);
}
