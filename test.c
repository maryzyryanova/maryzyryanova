#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "functions.h"

#undef main
int main() {
  assert(fabs(CountRightRec(2, 30) - 0.475750) < 0.00001);
  assert(fabs(CountRightIter(3, 60) - 0.748360) < 0.00001);
  printf("Scooooooooooby-Doooooooby-Doooooo");
  return 0;
}
