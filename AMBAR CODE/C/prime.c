#include <stdio.h>
void main()
{
    int n, i;
    printf("enter a no\n");
    scanf("%d", &n);
    
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Num is not prime");
            break;
        }
    }
    if (n == i)
    {
        printf("num is prime");
    }
}