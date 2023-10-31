#include <stdio.h>

/*
==============================================================
= Result                                                     =
==============================================================

- - - - * - - - - - - - *
- - - * * * - - - - - * * *
- - * * * * * - - - * * * * *
- * * * * * * * - * * * * * * *
* * * * * * * * * * * * * * * * *

 */
int main()
{
  int row;

  printf("Enter the width of the triangle: ");
  scanf("%d", &row);

  for (int i = 0; i < row - 1; i++)
  {

    // First triangle
    for (int j = 0; j < row - i - 1; j++)
    {
      printf("  ");
    }

    for (int k = -1; k < i * 2; k++)
    {
      printf("* ");
    }

    for (int j = 0; j < row - i - 1; j++)
    {
      printf("  ");
    }

    // Second triangle
    for (int j = 1; j < row - i - 1; j++)
    {
      printf("  ");
    }

    for (int k = -1; k < i * 2; k++)
    {
      printf("* ");
    }

    printf(" \n");
  }

  // Bottom part
  for (int i = 0; i < row * 4 - 3; i++)
  {
    printf("* ");
  }

  printf(" \n");
  return 0;
}