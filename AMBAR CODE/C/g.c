#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned int bs;
    float ta, hra, total;
    printf("enter your basic sal:");
    scanf("%u", &bs);
    ta = bs * 10.0 / 100;
    hra = bs * 20.0 / 100;
    total = bs + ta + hra;
    printf("your total sal is %f", total);
    getch();
}