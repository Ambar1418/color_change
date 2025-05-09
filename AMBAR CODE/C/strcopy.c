#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10], brr[10];
    int i, j;
    printf("Enter a string:\n");
    gets(arr);
    for (i = 0; arr[i] != '\0'; i++)
    {
        brr[i] = arr[i];
    }
    brr[i] = '\0';
    printf("%s", brr);
    return 0;
}