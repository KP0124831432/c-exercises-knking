#include <stdio.h>

int main()
{
  int h;
  int m;
  int conv;

  printf("Enter a 24-hour time xx:xx: ");
  scanf("%i:%i", &h,&m);

  if (h > 12 && h <= 23)
    printf("Equivalent 12-hout time: %i:%i PM",h - 12,m);
  else if (h == 0)
    printf("Equivalent 12-hout time: %i:%i AM",12,m);
  else if (h == 12)
    printf("Equivalent 12-hout time: %i:%i PM",12,m);
  else 
    printf("Equivalent 12-hout time: %i:%i AM",h,m);
}
