#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][10];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Enter name\n:");
        scanf("%s", str[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; str[i][j] != '\0'; j++)
            ;
        printf("\nLenght=%d", j);
    }
    return 0;
}