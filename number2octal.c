#include <stdio.h>

int main()
{
  int num = 0;
  
  //printf("Enter a number between 0 and 32767: ");
  //scanf("%i", &num);
  do 
  {
    printf("Enter a number between 0 and 32767: ");
    scanf("%i", &num);
    if (num > 32767)
      printf("Invalid number.. Try again...\n");
    else
    {
      printf("%05o\n",num);
      break;
    }
  }while(1);
  return(0);
}
