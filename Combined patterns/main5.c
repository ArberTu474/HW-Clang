#include <stdio.h>

int main()
{
  int num;
  printf("Sa numra duhet te paraqiten (10, 20, 30 ... 90, 100: ");
  scanf("%d", &num);

  for (int i = 0; i < num / 10; i++)
  {
    if ((i + 1) % 2 == 0)
    {
      printf("\n");
      for (int j = (i * 10) + 10; j > (i * 10); j--)
      {

        printf("%d\t ", j);
      }
    }
    else
    {
      for (int j = 1; j <= 10; j++)
      {

        if ((j + (10 * i)) % 10 == 1) // Arrihet numri 10
        {
          printf("\n");
        }

        printf("%d\t ", j + (10 * i));
      }
    }
  }
  printf("\n");

  return 0;
}