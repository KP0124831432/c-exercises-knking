#include <stdio.h>

int main()
{
  double volume = 0;
  double radio = 0;
  
  printf("Enter the Radio: ");
  scanf("%lf", &radio);
  volume = (4.0/3.0) * 3.141592653589793 * (radio * radio * radio);
  printf("\nRadio: %.2f\nVolume: %.2f",radio,volume);

}
