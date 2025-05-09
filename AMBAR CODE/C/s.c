#include <stdio.h>
#include <conio.h>
void main()
{
    int rad;
    float ar, circ;
    printf("enter radious");
    scanf("%d", &rad);
    ar = 3.14 * rad * rad;
    circ = 2 * 3.14 * rad;
    printf("ar is %f", ar);
    printf("\ncirc is %f", circ);
    getch();
}