#include <stdio.h>

int main()
{
  void roof(), house();
  int n;

  printf("Enter the size:");
  scanf("%d", &n);

  roof(n);
  house(n);

  return 0;
}

void roof(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= 2 * n - 1; j++)
    {
      if (j >= n - (i - 1) && j <= n + (i - 1))
      {
        printf("# ");
      }
      else
      {
        printf("  ");
      }
    }

    printf("\n");
  }
}

void house(int n)
{
  int m = 2 * n - 1;
  int door_height = m * 0.5;
  int window_height = m * 0.2;

  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      // White spaces
      if ((j > 1 && j < m) && (i > 1 && i < m))
      {
        if ((i >= m - door_height) && (j > (m / 2) - ((m - door_height) / 3) && j <= (m / 2) + ((m - door_height) / 2)))
        {
          printf("* ");

          if ((i >= m - door_height) && (j > m - window_height))
          {
            printf("* ");
          }
        }
        else
        {
          printf("  ");
        }
      }
      else
      {
        printf("* ");
      }
    }
    printf("\n");
  }
}