#include <stdio.h>
void main()
{
    int n, sum, x, a;
    printf("enter a no.\n");
    scanf("%d", &n);
    a = n;
    for (sum = 0; n > 0; n / 10)
    {
        x = n % 10;
        sum = sum + (x * x * x);
    }
    
    if (a == sum )
    {
        printf("no is armstorng");
    }
    else
    {
        printf("no is not armstrong");
    }
    printf("\n%d", sum);
}