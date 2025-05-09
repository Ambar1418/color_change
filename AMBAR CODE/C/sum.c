#include <stdio.h>
#include <conio.h>
void main()
{
int n,x,sum=0;
printf("enter a no.");
scanf("%d",&n);
while(n>0)
{
x=n%10;
sum=sum+x;
n=n/10;
}
printf("sum is %d",sum);
getch();

}