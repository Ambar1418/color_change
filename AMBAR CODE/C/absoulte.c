#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter a no: ");
    scanf("%d", &a);
    (a >= 0) ? printf("abs is %d", a) : printf("abs is %d", -a);
    getch();
}