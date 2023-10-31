#include <stdio.h>
/*
==============================================================
= Result                                                     =
==============================================================

* * * * * * * *
* * * * * * * *
* * * * * * * *
* * * * * * * *
* * * * * * * *
* *
* *
* *
* *
* *
* *

 */

int main()
{
  int flag_width, flag_height, stick_width, stick_height;

  printf("Enter the width of the flag: ");
  scanf("%d", &flag_width);

  printf("Enter the height of the flag: ");
  scanf("%d", &flag_height);

  printf("Enter the width of the stick: ");
  scanf("%d", &stick_width);

  stick_height = flag_width - flag_height;

  // Flag
  for (int i = 0; i < flag_height; i++)
  {
    for (int k = 0; k < flag_width; k++)
    {

      if (stick_width <= k)
      {
        printf("\033[31m* \033[0m");
      }
      else
      {
        printf("* ");
      }
    }

    printf(" \n");
  }

  // Stick
  for (int i = 0; i < stick_height; i++)
  {
    for (int k = 0; k < stick_width; k++)
    {
      printf("* ");
    }
    printf(" \n");
  }

  return 0;
}