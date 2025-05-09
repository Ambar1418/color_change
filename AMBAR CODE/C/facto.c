#include <stdio.h>
#include <conio.h>
void main()
{
    int n, f = 1;
    printf("Enter a no:\n");
    scanf("%d", &n);

    while (n > 1)
    {
        f = f * n;
        n--;
    }
    printf("fact is %d ", f);
}