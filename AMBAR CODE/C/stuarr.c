#include <stdio.h>

int main()
{
    int arr[3][4];
    int i, j, sum;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter marks:");
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 4; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("\n std no=%d,total no=%d", i + 1, sum);
    }
    return 0;
}