#include <stdio.h>
#include <conio.h>
void main()
{
int a,b;
printf("enter 2 intger");
scanf("%d %d",&a,&b); 

if(a>b)
 printf("%d is gr",a);
else if(b>a)
printf("%d is gr",b);
else
printf("both are equal");
getch();
}