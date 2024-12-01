#include <stdio.h>

int main()
{
  int y;
  int d;
  int m;

  y=d=m=0;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%i/%i/%i",&m,&d,&y);
  printf("You entered the date %i%i%i", y, m, d);
}
