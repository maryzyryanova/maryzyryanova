#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "functions.h"

#undef main
int main() {
  assert(fabs(CountRightRec(2, 30) - 0.48) < 0.01);
  assert(fabs(CountRightIter(3, 60) - 0.75) < 0.01);
  printf("Scooooooooooby-Doooooooby-Doooooo");
  return 0;
}
