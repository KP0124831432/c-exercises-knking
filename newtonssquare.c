#include <stdio.h>

int main()
{
  double  x = 0;
  double y = 1;
  double xy = 0;
  double yxy = 0;
  double epsilon = 0.000001;

  printf("Enter a positive number: ");
  scanf("%lf", &x);
  if ( x == 0)
  {
    printf("Error!! Cannot calculate the square root of a negative number!!!!\n");
    return(1);
  }
  while(y - xy > epsilon || xy - y > epsilon)
  {
    xy = x / y;
    yxy = (xy + y) / 2;
    y = yxy;
  }
  printf("square root : %.5f\n", y);
  return (0);
}
