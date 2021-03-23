#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "functions.h"

#undef main
int main() {
  assert(fabs(CountRightRec(2, 0.523333) - 0.499770) < 1);
  assert(fabs(CountRightIter(3, 1.046667) - 0.865760) < 1);
  printf("Scooooooooooby-Doooooooby-Doooooo");
  return 0;
}
