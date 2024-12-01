#include <stdio.h>

int main()
{
  int num = 0;
  int count = 0;
  
  printf("Enter a number: ");
  scanf("%i", &num);
  printf("The number %i ", num);
  while (num >= 1)
  {
    num /= 10;
    count++;
  }
  //do{
  //num /= 10;
  //count++;
  //}while(n >0);
  //return 0

  printf("has %i digits", count);
}
