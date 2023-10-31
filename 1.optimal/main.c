#include <stdio.h>

int main()
{
  void left(), left_down(), right(), right_down(), pyramid(), pyramid_down();
  int n;

  printf("Enter the number of rows: ");
  scanf("%d", &n);

  // left(n);
  right(n);

  return 0;
}

void left(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
}

void left_down(int n)
{
  for (int i = n; i >= 1; i--)
  {
    for (int j = i; j > 0; j--)
    {
      printf("* ");
    }
    printf("\n");
  }
}

void right(int n)
{
  for (int i = 1; i <= n; i++)
  {
    // spaces
    for (int k = n - i; k > 0; k--)
    {
      printf("  ");
    }

    // stars
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }

    printf("\n");
  }
}

void right_down(int n)
{
  for (int i = n; i >= 1; i--)
  {
    for (int k = n - i; k > 0; k--)
    {
      printf("  ");
    }
    for (int j = i; j > 0; j--)
    {
      printf("* ");
    }

    printf("\n");
  }
}

void pyramid(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= 2 * n - 1; j++)
    {
      if (j >= n - (i - 1) && j <= n + (i - 1))
      {
        printf("* ");
      }
      else
      {
        printf("  ");
      }
    }

    printf("\n");
  }
}

void pyramid_down(int n)
{
  for (int i = n; i >= 1; i--)
  {
    for (int j = i * 2 - 1; j > 0; j--)
    {
      if (j >= n - (i - 1) && j <= n + (i - 1))
      {
        printf("* ");
      }
      else
      {
        printf("- ");
      }
    }

    printf("\n");
  }
}