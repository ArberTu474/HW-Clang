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
    if (i % 3 == 2 || i % 3 == 1)
    {
      for (int j = 1; j <= columns; j++)
      {
        // Rreshti 1
        if (i % 3 == 1 && j % 3 == 1)
        {
          printf("* ");
        }
        // Rreshti 2
        else if (i % 3 == 2 && (j % 3 == 2 || j % 3 == 0))
        {
          printf("* ");
        }
        else
        {
          printf("+ ");
        }
      }
    }
    else
    {
      for (int j = 1; j <= columns; j++)
      {
        // Reshti 3
        if (j % 2 == 0)
        {

          printf("* ");
        }
        else
        {
          printf("+ ");
        }
      }
    }

    printf("\n");
  }

  return 0;
}