#include <stdio.h>

int main()
{
  int number, triangularNumber;

  printf ("What triangular number do you want? ");
  scanf ("%i", &number);

  triangularNumber = 0;

  for (int n = 0; n <= number; n++)
    triangularNumber += n;

  printf ("Triangular number %i is %i\n", number, triangularNumber);

  return 0;
}
