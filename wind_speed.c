#include <stdio.h>

int main()
{
  int n = 0;

  printf("Enter wind speed in knots: ");
  scanf("%i", &n);

  if (n <= 63 && n >= 48)
     printf("Storm\n");
  else if ( n <= 47 && n >= 28)
    printf("Gale\n");
  else if (n <= 27 && n >= 4)
    printf("Breeze\n");
  else if (n <= 3 && n >= 1)
    printf("Light air\n");
  else if ( n < 1)
    printf("Calm\n");
  else
   printf("Hurricane\n");
}
