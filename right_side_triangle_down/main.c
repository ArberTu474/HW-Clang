#include <stdio.h>

/*
==============================================================
= Result                                                     =
==============================================================

* * * * *
- * * * *
- - * * *
- - - * *
- - - - *

 */

int main()
{
  int row;

  printf("Enter the width of the triangle: ");
  scanf("%d", &row);

  for (int i = 0; i < row; i++)
  {

    for (int j = 0; j < i; j++)
    {
      printf("- ");
    }

    for (int k = row - 1; k > i; k--)
    {
      printf("* ");
    }

    printf("* \n");
  }

  return 0;
}