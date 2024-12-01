#include <stdio.h>

int main()
{
  int n[4];
  int l = 0;
  int s = 0;

  printf("Enter four integers: ");
  scanf("%i %i %i %i", &n[0],&n[1],&n[2],&n[3]);
  for (int i = 0 ; i < 4 ; i++)
  {
    if (n[i] > l)
      l = n[i];
    if (s == 0 || n[i] < s)
      s = n[i];
    
  }
  printf("Largest: %i\n", l);
  printf("Smallest: %i\n",s);

  
}
