#include <stdio.h>
#include <conio.h>
void main()
{
  int arr[10];
  int i;
  for (i = 0; i <= 9; i++)
  {
    printf("Enter a no.\n");
    scanf("%d", &arr[i]);
  }
  printf("\nyou inputted");
  for (i = 0; i <= 9; i++)
  {
    printf("\n%d", arr[i]);
  }
  getch();
}