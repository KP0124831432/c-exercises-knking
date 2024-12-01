#include <stdio.h>

int main()
{
  int code;
  int part1;
  int part2;

  code=part1=part2=0;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%i) %i-%i",&code,&part1,&part2);
  printf("You entered : %i.%i.%i\n",code,part1,part2);
}
