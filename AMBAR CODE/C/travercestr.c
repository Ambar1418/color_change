#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int i;
    printf("Enter name:\n");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        printf("\n%c", str[i]);
    }
    return 0;
}