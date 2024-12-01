#include <stdio.h>
#include <strings.h>

int main()
{
  int prefix;
  int identifier;
  int code;
  int inumber;
  int digit;
  
  prefix=identifier=code=inumber=digit=0;
  printf("Enter ISBN: ");
  scanf("%i-%i-%i-%i-%i",&prefix,&identifier,&code,&inumber,&digit);
  printf("GS1 prefix: %i\n", prefix);
  printf("Group identifier: %i\n", identifier);
  printf("Publisher code: %i\n", code);
  printf("Item number: %i\n", inumber);
  printf("Check digit: %i\n", digit);
}
