#include <stdio.h>

/*
==============================================================
= Result                                                     =
==============================================================
* * * * * * * * *
- * * * * * * *
- - * * * * *
- - - * * *
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