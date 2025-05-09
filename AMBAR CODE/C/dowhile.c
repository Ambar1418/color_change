#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    char choice;
    do
    {
       printf("enter two integer");
       scanf("%d %d",&a,&b);
       printf("sum is %d",a+b);
       fflush(stdin);
       printf("\ndo you want to repeat (Y/N)?");
       scanf("%c",&choice);
     } while(choice=='Y');
    





}
