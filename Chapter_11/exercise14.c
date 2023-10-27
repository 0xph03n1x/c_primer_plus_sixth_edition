#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  double num, exp;

  if (argc != 3) {
    printf("Usage: %s number exponent\n", argv[0]);
  } else {
    num = atof(argv[1]);
    exp = atof(argv[2]);
    printf("%f to the power of %f = %g\n", num, exp, pow(num, exp));
  }

  return 0;
}
