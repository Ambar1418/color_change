#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    do
    {
        printf("Enter a number:(press 0 to stop)\n");
        scanf("%d", &n);
        if (n < 10 && n > 0)
        {
            printf("Jay shri ram.\n");
        }
        if (n > 10)
        {
            printf("Shiv hi satya hai.\n");
        }
        printf("\n");
    } while (n != 0);
    getch();
}
