#include <stdio.h>

int main() {
  int a = 25;
  int b = 2;

  float c = 25.0;
  float d = 2.0;

  printf("6 + a / 5 * b = %i\n", 6 + a / 5 * b);
  printf("a / b * b = %i\n", a / b * b);
  printf("c / d * d = %f\n", c / d * d);
  printf("-a = %i\n", -a);

  printf("a + -b = %i\n", a + -b);
  printf("a + -b * a = %i\n", a + -b * a);

  return 0;
}

