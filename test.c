#include <assert.h>
#include "functions.h"
#include <math.h>

#undef main
int main() {
    double test = 0.01;
    printf("%f\n", CostOfTheDistillation(20) - 31.10);
    assert(fabs(CostOfTheDistillation(20) - 31.10) < test);
    assert(fabs(CostOfTheCustoms(2, 5500) - 10263) < test);
    assert(fabs(TotalCostInByn(2000, 2453.2, 2, 5500) - 20297.73) < test);
    return 0;
}
