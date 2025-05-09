#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("enter 2 intgers\n");
    scanf("%d %d", &a, &b);

    (a != b) ? (a > b) ? printf("%d is greater", a) : printf("%d is greater", b) : printf("both are equal");

    getch();
}