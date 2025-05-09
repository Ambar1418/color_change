#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("enter 3 angles");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c == 180)
        printf("it is a valid trangle");
    else
        printf("it is not a vlid trangle");
    getch();
}