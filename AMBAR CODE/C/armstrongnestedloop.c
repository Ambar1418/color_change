#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, x, rem, sum;
    printf("Enter a no:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        x = i;
        sum = 0;
        while (x > 0)
        {
            rem = x % 10;
            sum = sum + rem * rem * rem;
            x = x / 10;
        }
        if (sum == i)
            printf("\n%d\n", i);
    }
    getch();
}