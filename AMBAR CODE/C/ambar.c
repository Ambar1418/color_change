#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("enter a character\b");
    scanf("%c", &ch);
    printf("\nits ascii is %d", ch);
    getch();
}