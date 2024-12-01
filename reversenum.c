#include <stdio.h>

int main()
{
  int num = 0;

  printf("Enter a two-digit number: ");
  scanf("%i",&num);
  printf("The reversal is: %i\n",((num % 10) * 10) + (num / 10));
}
