#include <stdio.h>

//Dated this _______ day of ________, 20__.
int main()
{
  int month;
  int day;
  int year;
  
  printf("Enter date (mm/dd/yy): ");
  scanf("%i/%i/%i", &month, &day, &year);
  printf("Dated this %i",day);
  switch (day)
  {
    case 1: case 21: case 31: printf("st"); break;
    case 2: case 22: printf("nd"); break;
    case 3: case 23: printf("rd"); break;
    default: printf("th"); break;
  } 
//  if (day % 10 == 1 && day != 11)
//    printf("st");
//  else if (day % 10 == 2 && day != 12)
//   printf("nd");
//  else if (day % 10 == 3 && day != 13)
//    printf("rd");
//  else
//    printf("th");
  
  printf(" day of ");
  switch(month)
  {
    case 1: printf("January"); break;
    case 2: printf("February"); break;
    case 3: printf("March"); break;
    case 4: printf("April"); break;
    case 5: printf("May"); break;
    case 6: printf("June"); break;
    case 7: printf("July"); break;
    case 8: printf("August"); break;
    case 9: printf("September"); break;
    case 10: printf("October"); break;
    case 11: printf("November"); break;
    case 12: printf("December"); break;
  }
  
  printf(", 20%i\n",year);
}
