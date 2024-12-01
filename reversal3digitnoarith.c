#include <stdio.h>

int main()
{
  int n1,n2,n3 = 0;

  printf("Enter a three-digit number: ");
  scanf("%1i%1i%1i", &n1,&n2,&n3);
  printf("The reversal is: %i%i%i\n", n3, n2, n1);
}
