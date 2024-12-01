#include <stdio.h>

int main()
{
  int trade = 0;
  double commission = 0;

  printf("Enter value of trade: ");
  scanf("%i", &trade);

  if (trade > 500000)
    commission = 255 + (trade * (0.09 / 100));
  else if (trade >= 50000 && trade < 500000)
    commission = 155 + (trade * (0.11 / 100));
  else if (trade >= 20000 && trade < 50000)
    commission = 100 + (trade * (0.22 / 100));
  else if (trade >= 6250 && trade < 20000)
    commission = 76 + (trade * (0.34 / 100));
  else if (trade >= 2500 && trade < 6250)
    commission = 56 + (trade * (0.66 / 100));
  else
    commission = (30 + (trade * (1.7 / 100)));

  printf("Commission: $%.2f\n",commission >= 39 ? commission : 39);
}
