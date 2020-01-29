/*
----A
---ABC
--ABCDE
-ABCDEFG
ABCDEFGHI

A ==> 65
I ==> 73
1-5 ==> 65 to 69
*/
void main()
{
    int i, j;
    for(i=33; i<=37; i++)
    {

       for(j=i;j<=36;j++)
       {
           printf("-");
       }
       for(j=65; j<=2*i-1;j++)
       {
           printf("%c",j);
       }
       printf("\n");
    }


}
