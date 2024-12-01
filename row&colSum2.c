#include <stdio.h>
#include <unistd.h>

int main()
{
  int row[5][5];
  int i = 0;
  int j = 0;
  int sum = 0;
  while (i < 5)
  {
    printf("Enter row %i: \n", i + 1);
    while (j < 5)
    {
      scanf("%i", &row[i][j]);
      j++;
    }
    j = 0;
    i++;
  }
  
  printf("Row totals: ");
  for (int i = 0; i < 5 ; i++)
  {
    for (int j = 0; j < 5; j++)
      sum += row[i][j];
    printf("%i ", sum);
    sum = 0;
    j = 0;
  }
  printf("\nColumn totals: ");
  sum = 0;
  for (int j = 0; j < 5; j++)
  {
    for (int i = 0; i < 5; i++)
      sum += row[i][j];
    printf("%i ", sum);
    i = 0;
    sum = 0;

  }
  printf("\n");
}
  
  
