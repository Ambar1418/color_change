#include <stdio.h>
#include <conio.h>
void main ()
{
 int a,b,c,sum;
 float avg;
 printf("inter 3 integers :");
 scanf("%d %d %d",&a,&b,&c); 
 sum=a+b+c;
 avg=sum/3.0;
 printf("sum is %d",sum);
 printf("\navg is %f",avg);
 getch();
}