#include <stdio.h>
/* Computes a universal Product Code check digit */ 
int main()
{
  int d,a1,a2,a3,a4,a5,b1,b2,b3,b4,b5 = 0;
  int check = 0;
  int first_sum = 0;
  int second_sum = 0;

  printf("Enter the first (single) digit: ");
  scanf("%i", &d);
  printf("Enter first group of five digits: ");
  scanf("%1i%1i%1i%1i%1i",&a1,&a2,&a3,&a4,&a5);
  printf("Enter second group of five digits: ");
  scanf("%1i%1i%1i%1i%1i",&b1,&b2,&b3,&b4,&b5);

  first_sum = (d + a2 + a4 + b1 + b3 + b5);
  second_sum = (a1 + a3 + a5 + b2 + b4);
  check =  9 - ((((3 * first_sum) + second_sum) - 1) % 10);
  printf("Check digit: %i\n", check);
  
}
