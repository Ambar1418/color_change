#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    int i,name;
    printf("Enter name:\n");
    scanf("%s",name);

    for (i = 0; str[i] != '\0'; i++);

    printf("length= %d", i);

}