#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "functions.h"

#undef main
int main() {
  assert(fabs(CostOfTheDistillation(10) - 15.55) < 0.01);
  assert(fabs(CostOfTheCustoms(2, 3300) - 6157.80) < 0.01);
  assert(fabs(TotalCostInByn(10000, 10, 2, 3300) - 37273.35) < 0.01);
  return 0;
}
