#include <stdio.h>
#include <conio.h>
void main()
{
int n,sum,x;
printf("Enter a no.");
scanf("%d",&n);
for(sum=0;n>0;n/10)
{
x=n%10;
sum=sum+x;
}
printf("sum of digits is %d",sum);
getch();
}