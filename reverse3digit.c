#include <stdio.h>

int main()
{
  int num = 0;
  int lastDigit = 0;
  int middleDigit = 0;
  int firstDigit = 0;

  printf("Enter a three-digit number: ");
  scanf("%i", & num);
  lastDigit = num % 10;
  middleDigit = (num / 10) % 10;
  firstDigit = (num - middleDigit - lastDigit) / 100;
  printf("The reversal is: %i%i%i",lastDigit,middleDigit,firstDigit);
}
