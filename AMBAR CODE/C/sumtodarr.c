#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[3][4];
    int i, j, sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter no.");
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }
    printf("sum is %d\n", sum);
    printf("ave is %f", (float)sum / 12);
}