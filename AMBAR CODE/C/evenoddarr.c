#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10];
    int i, sumEven = 0, sumOdd = 0;
    for (i = 0; i <= 9; i++)
    {
        printf("Enter element:\n");
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            sumEven = sumEven + arr[i];
        }
        else
        {
            sumOdd = sumOdd + arr[i];
        }
    }

    printf("sum of even No is: %d\n", sumEven);
    printf("sum of Odd No is: %d", sumOdd);

    getch();
}
