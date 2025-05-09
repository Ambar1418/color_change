#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    float b,c;

    a= 300*300/300;
    b=300*300/300.0;
    c=300*300.0/300;

    printf("a=%d b=%f c=%f",a,b,c);
    getch();
}