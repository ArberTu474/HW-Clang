//=========================================================
//=                        RESULT                         =
//=========================================================

/*
 * + + * + +
 * + + * + +
 * + + * + +
 * + + * + +
 * + + * + +
 * + + * + +
 */

#include <stdio.h>

int main()
{
  int rows, columns;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &columns);

  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= columns; j++)
    {
      if (j % 3 == 1)
      {
        printf("* ");
      }
      else
      {
        printf("+ ");
      }
    }
    printf("\n");
  }

  return 0;
}