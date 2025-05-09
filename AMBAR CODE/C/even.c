#include <stdio.h>
#include <conio.h>
void main()
{
int a;
printf("enter a no ");
scanf("%d",&a);
if(a<0)
{
  printf("please enter positive number");
}
else if((a%2==0)){
  printf("even no");
}
else
{
 printf("odd no");
}
getch();
}
