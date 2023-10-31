#include <stdio.h>

/*
==============================================================
= Result                                                     =
==============================================================
- - - - - *
- - - - * * *
- - - * * * * *
- - * * * * * * *
- * * * * * * * * *
* * * * * * * * * * *
- * * * * * * * * *
- - * * * * * * *
- - - * * * * *
- - - - * * *
- - - - - *
 */

int main()
{
  int row;

  printf("Enter the size of the rhombus: ");
  scanf("%d", &row);

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < row - i; j++)
    {
      printf("  ");
    }

    for (int k = 0; k < i * 2; k++)
    {
      printf("* ");
    }

    printf("* \n");
  }

  for (int i = 0; i < row * 2 + 1; i++)
  {
    printf("* ");
  }
  printf("\n");

  for (int i = 0; i < row; i++)
  {
    // Down
    for (int j = -1; j < i; j++)
    {
      printf("  ");
    }

    for (int k = row * 2 - 2; k > i * 2; k--)
    {
      printf("* ");
    }

    printf("* \n");
  }

  return 0;
}