#include <stdio.h>

int main()
{
  int amount = 0;
  int nbills = 0;
  int bills[] = {100,50,20,10,5,1};
  printf("Enter a dollar amount: ");
  scanf("%i", &amount);
  for(int i = 0; i < 6; i++)
  {
    nbills = amount / bills[i];
    amount = amount % bills[i];
    printf("**** $%i bills: %i\n",bills[i], nbills);
  }
  
}
