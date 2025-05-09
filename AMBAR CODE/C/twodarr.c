#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[3][4];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter no.\n");
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter no.");
            scanf("%d", arr[i][j]);
        }
        printf("\n");
    }
    getch();
}