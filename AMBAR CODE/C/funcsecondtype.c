#include <stdio.h>

void average(int, int, int);

void main()
{
    int a, b, c;
    printf("Enter 3 integers:\n");
    scanf("%d %d %d", &a, &b, &c);

    average(a, b, c);
}
void average(int i, int j, int k)
{
    float x;
    x = (float)(i + j + k) / 3;
    printf("average is %f", x);
}