#include <stdio.h>

int main()
{
  int n1;
  int d1;
  int n2;
  int d2;
  
  printf("Enter two fractions separated by a plus sign: ");
  scanf("%i/%i+%i/%i",&n1,&d1,&n2,&d2);
  printf("The sum is: %i/%i\n", ((n1 * d2) + (n2 * d1)), (d1 * d2));
}
