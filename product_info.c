#include <stdio.h>

int main()
{
  int itemN = 0;
  double price = 0.0;
  int purchaseD;
  int purchaseM;
  int purchaseY;

  printf("Enter item number: ");
  scanf("%i", &itemN);
  printf("Enter price: ");
  scanf("%lf", &price);
  printf("Enter purchase date (mm/dd/yyy): ");
  scanf("%i/%i/%i", &purchaseM, &purchaseD, &purchaseY);
  printf("Item        ");
  printf("Unit Price        ");
  printf("Purchase Date       \n");
  printf("%-3.i         ", itemN);
  printf("$ %7.2f           ", price);
  printf("%i/%i/%i", purchaseM,purchaseD,purchaseY);

}
