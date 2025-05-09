#include <stdio.h>
#include <conio.h>
void main ()
{
char ch;
printf("enter a character");
scanf("%c",&ch);
if(ch>=65 && ch<=97)
printf("it is a capital later");
else if(ch>=97 && ch<=122 )
printf("it is small later");
else if(ch>=48 && ch<=57)
printf("it is a digit");
else
printf("it is somthing else");
getch();




}