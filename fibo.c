#include <stdio.h>

int main()
{
  int i=2;
  int fib[41] = {0,1,2,0};

  while(i <= 40)
  {
    fib[i] = fib[i-1] + fib[i-2];
    i++;
  }
  for (int j = 0; j <= 40; j++)
    printf("%i  ", fib[j]);
}


/*
 __
|__|
|__|

*/
