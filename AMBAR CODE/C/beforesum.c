#include <stdio.h>
#include <conio.h>
void main()
{
int a,sum=0;
do{
printf ("Enter a Num and press 0 to stop\n");
scanf ("%d",&a);
sum=sum+a;
}while(a!=0);
printf("Total sum is %d",sum);
}