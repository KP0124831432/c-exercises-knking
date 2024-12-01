#include <stdio.h>
#define FREEZING_POINT 32
#define SCALE_FACTOR (5.0 / 9.0)
int main()
{
  int input_fahr;

  input_fahr = 0;
  printf("Enter Fahrenheit Temperature: ");
  scanf("%i", &input_fahr);
  printf("Celsius Equivalent: %.1f\n", (input_fahr - FREEZING_POINT) * SCALE_FACTOR);

}
