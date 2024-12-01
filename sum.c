#include <stdio.h>

int main()
{
  int n = 0;
  int sum = 0;
  printf("Enter intigers (0 to terminate): ");

  do
  {
    scanf("%d", &n);
    sum += n;
  }while ( n != 0);
 printf("The sum is: %i", sum); 
}


