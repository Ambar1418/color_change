#include <stdio.h>
#include <conio.h>
void main()
{
int a,b;
int choise;
printf("enter 2 integer\n");
scanf("%d %d",&a,&b);
printf("select an operation:\n");
printf("1.add\n2.sub\n3.mult\n4.div");
printf("\nenter your choise");
scanf("%d",&choise);

switch(choise)
{
case 1:
printf("sum is %d",a+b);
break;

case 2:
printf("diff is %d",a-b);
break;

case 3:
printf("mult is %d",a*b);
break;

case 4:
printf("div is %F",(float)a/b);
break;

default:
printf("wrong choise!");

}
getch();
}