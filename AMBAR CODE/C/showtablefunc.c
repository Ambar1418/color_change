#include <stdio.h>

void showtable(int, int);

void main()
{
    int n, i;
    printf("Enter a no:");
    scanf("%d", &n);

    printf("Enter no. of terms:");
    scanf("%d", &i);

    showtable(n, i);
}

void showtable(int n, int t)
{

    int i;

    if (t <= 0)
    {
        printf("table cant be printed:");
        return;
    }

    printf("table of %d", n);
    for (i = 1; i <= t; i++)
    {
        printf("\n %d * %d= %d", n, i, n * i);
    }
}