#include <stdio.h>
#include <conio.h>
void main()
{
int n,f;
printf("enter a no");
scanf("%d",&n);
for(f=1;n>1;n--)
{
    f=f*n;
}
printf("factorial is %d",f);
getch();

}