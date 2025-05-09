#include <stdio.h>
#include <conio.h>
void main()
{
    int age;
    virat:

    printf("Enter your age\n");
    scanf("%d", &age);

    if (age <0)
    {
        printf("invalid! age try again\n");
    }
    else
        printf("your age is %d", age);
    getch();
}