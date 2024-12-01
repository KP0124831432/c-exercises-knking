#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int Bool;

int main()
{
  Bool check[9] = {FALSE};
  int  n;
  int digit;
  printf("Enter a four digit number: ");
  scanf("%i", &n);
  
  while (n > 0)
  {
    digit = n % 10;
    if (check[digit])
      break;
    check[digit] = TRUE;
    n /= 10;
  }
  if ( n > 0)
    printf("Repeated digit...\n");
  else 
    printf("No repeated digit...\n");

}
