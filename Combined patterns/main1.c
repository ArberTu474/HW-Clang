//=========================================================
//=                        RESULT                         =
//=========================================================

/*
* * * * 
+ + + + 
+ + + + 
* * * * 
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

    if (i % 3 == 2 || i % 3 == 0)
    {
      for (int j = 1; j <= columns; j++)
      {
        printf("+ ");
      }
    }
    else
    {
      for (int j = 1; j <= columns; j++)
      {
        printf("* ");
      }
    }

    printf("\n");
  }

  return 0;
}