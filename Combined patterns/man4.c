/*
11       12      13      14      15      16      17      18      19      20
21       22      23      24      25      26      27      28      29      30
31       32      33      34      35      36      37      38      39      40
41       42      43      44      45      46      47      48      49      50
*/

#include <stdio.h>

int main()
{
  for (int i = 1; i <= 50; i++)
  {
    if (i % 10 == 1)
      printf("\n");
    printf("%d\t ", i);
  }
  printf("\n");

  return 0;
}