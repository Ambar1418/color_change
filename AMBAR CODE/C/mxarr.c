#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10], i, n, max = 0;
    for (i = 0; i <= 9; i++)
    {
        printf("Enter a no:\n");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("max no is %d", max);
    getch();
}