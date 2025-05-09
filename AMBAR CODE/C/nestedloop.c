#include <stdio.h>
#include <conio.h>
void main()
{
char i,j;
for(i=65;i<=68;i++)
     {
       for(j=68;j>=i;j--)
       {
        printf("%c",j);
       }
         printf("\n");
     }
getch();


}