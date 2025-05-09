#include <stdio.h>

int main()
{
    int arr[2][2], brr[2][2], crr[2][2];
    int i, j;
    printf("Enter value for the fisrt 2D array:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter a number:\n");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter value for the second 2d array:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter a number:\n");
            scanf("%d", &brr[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            crr[i][j] = arr[i][j] + brr[i][j];
            printf("%d\n", crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}