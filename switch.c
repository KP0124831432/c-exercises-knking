#include <stdint.h>
#include <stdio.h>

//from if to switch
int main()
{
  int grade = 5;
  if (grade == 4)
    printf("Excellent\n");
  else if (grade == 3)
    printf("Good\n");
  else if ( grade == 2)
    printf("Average\n");
  else if (grade == 1)
    printf("Poor");
  else if (grade == 0)
    printf("Failling\n");
  else
    printf("Illegal grade\n");

  //switch 
  switch(grade)
  {
    case(4):
      printf("Excellent\n");
      break; 
    case(3):
      printf("Good\n");
      break;
    case(2):
      printf("Average\n");
      break;
    case(1):
      printf("Poor");
      break;
    case(0):
      printf("Failling\n");
      break;
    default:
      printf("Illegal grade\n");
      break;
  }
}

