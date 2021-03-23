#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "functions.h"

#undef main
int main() {
  assert(fabs(CountRightRec(2, 0.52333) - 0.475557) < 0.000001);
  assert(fabs(CountRightIter(3, 1.046667) - 0.748198) < 0.000001);
  printf("Scooooooooooby-Doooooooby-Doooooo");
  return 0;
}
