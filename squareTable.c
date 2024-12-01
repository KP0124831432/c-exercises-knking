#include <stdio.h>

int main()
{
  int n = 0;
  
  printf("Enter number of entries in table: ");
  scanf("%i",&n);
  for (int i = 1 ; i <= n ; i++)
    printf("%10i%10i\n", i, (i * i));
}
