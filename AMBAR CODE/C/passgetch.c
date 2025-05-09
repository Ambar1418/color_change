#include <stdio.h>
#include <string.h>
#include <dos.h>
int main()
{
    char pwd[5];
    int i;
    pwd[i] = getch();
    printf("Enter password:\n");
    for (i = 0; i <= 4; i++)
    {
        printf("*");
    }
    pwd[i] = '\0';
    printf("Password vrtification under proces ,please wait ...");
    delay(3000);
    if (strcmp(pwd, "abcd") ==  0)

        printf("\nPassword selected:");
    else
        printf("\nPassword invlid");
    return 0;
}