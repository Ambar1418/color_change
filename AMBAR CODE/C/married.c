#include <stdio.h>
#include <conio.h>
void main()
{
char gen,st;
int age;
printf("enter your age");
scanf("%d",&age);

printf("enter your gender (M/F)");
fflush(stdin);
scanf("%c",&gen);

printf("enter your maritaly(Y/N)");
fflush(stdin);
scanf("%c",&st);

if(st=='Y')
printf("insurance given");
else
     {
        if(gen=='M')
        {
            if(age>35)
            printf("insurance given");
            else
            printf("insurance not given");
        }
        else
        {
            if(age>30)
            printf("insurance given");
            else
            printf("insurance not given");
        }
        getch();
}
}