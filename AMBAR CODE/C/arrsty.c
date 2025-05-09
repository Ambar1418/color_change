#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10], i, n, count;
    for (i = 0; i <= 9; i++)
    {
        printf("Enter a no:\n");
        scanf("%d", &arr[i]);
    }
    printf("\nEnter no to search:\n:");
    scanf("%d", &n);
    for (i = 0; i <= 9; i++)
    {
        if (arr[i] == n)
        {
            printf("\nno found at pos %d\n", i + 1);
            count = count + 1;
        }
    }
    if (count == 0)
        printf("no not found");
    getch();
}
