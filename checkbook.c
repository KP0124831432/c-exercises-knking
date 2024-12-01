#include <stdio.h>

int main()
{
  int c;
  double balance = 0.0;
  double credit = 0.0;
  double debit = 0.0;

  printf("*** ACME checkbook-balancing program ***");
  printf("Commands: 0=Clear, 1=Credit, 2=Debit, 3=Balance 4=exit\n");
  while (1)
  {
    printf("Enter command: ");
    scanf("%i", &c);
    switch(c)
    {
     case 0:
       balance = 0;
       break;
     case 1:
       printf("Enter amount of Credit\n");
       scanf("%lf",&credit);
       balance += credit;
       break;
     case 2:
       printf("Enter amount of Debit\n");
       scanf("%lf",&debit);
       balance -= debit;
       break;
      case 3:
        printf("Current balance $%.2f.\n",balance);
        break;
      case 4: printf("Exiting program...\n");return(0);
      default:
       printf("Commands: 0=Clear, 1=Credit, 2=Debit, 3=Balance 4=exit\n");
     break;
    }
  }
}
