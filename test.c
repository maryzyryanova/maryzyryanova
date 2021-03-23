#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "functions.h"

#undef main
int main() {
  assert(fabs(CountRightRec(2, 30 * 3.14 / 180) - 0.499770) < 0.1);
  assert(fabs(CountRightIter(3, 60 * 3.14 / 180) - 0.865760) < 0.1);
  printf("Scooooooooooby-Doooooooby-Doooooo");
  return 0;
}
