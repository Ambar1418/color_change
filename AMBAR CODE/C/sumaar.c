#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10];
    int i, sum = 0;
    for (i = 0; i <= 9; i++)
    {
        printf("Enter element:\n");
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("sum is %d", sum);
    printf("\nAve. is %f", (float)sum / 10);
    getch();
}