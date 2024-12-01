#include <stdio.h>

int main()
{
  double  balance;
  double  irate;
  double  mp;
  double  ap;

  balance = irate = mp = 0;
    
  printf("Enter the initial balance: ");
  scanf("%lf", &balance);
  printf("Enter the interest rate: ");
  scanf("%lf", &irate);
  irate = (irate / 100) / 12;
  printf("Enter the monthly payment: ");
  scanf("%lf", &mp);
  printf("How many months have you already paid for?: ");
  scanf("%lf", &ap);
  for (int i = 0; i < ap; i++)
  {
       balance = (balance * (1 + irate)) - mp;
       printf("Balance remaining after %iº payment: $%.2f\n", (i + 1), balance);
  }
}
