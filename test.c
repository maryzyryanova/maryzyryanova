#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "functions.h"

#undef main
int main() {
  printf("%f", CountRightRec(2, 0.523333));
  assert(fabs(CountRightRec(2, 0.523333) - 0.475557) < 0.1);
  printf("%f", CountRightIter(3, 1.046667));
  assert(fabs(CountRightIter(3, 1.046667) - 0.748198) < 0.1);
  printf("Scooooooooooby-Doooooooby-Doooooo");
  return 0;
}
