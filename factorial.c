#include <stdio.h>

int main()
{
  long long unsigned int f;
  long long unsigned int temp;
  int i;
  int n;
  f=temp=0;
  i = 1;
  n = 0;
  printf("Enter a positive integer: ");
  scanf("%i", &n);
  temp = n;
  
  while (i < n)
  {
    f = temp * i;
    temp = f;
    i++;
  }
  printf("Factorial of %i is: %llu",n, f);

}
