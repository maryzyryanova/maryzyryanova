#include <assert.h>
#include "functions.h"
#include <float.h>
#include <stdio.h>
#include <math.h>
/*
float Test_1() {
    assert(fabs(CostOfTheDistillation(2453.2) - 3814.73) < 1);
    assert(fabs(CostOfTheDistillation(7636) - 11873.98) < 1);
}

float Test_2() {
    assert(fabs(CostOfTheCustoms(2, 5500) - 10263) < 1);
    assert(fabs(CostOfTheCustoms(5, 2000) - 3732) < 1);
    assert(fabs(CostOfTheCustoms(7, 3000) - 2799) < 1);
    assert(fabs(CostOfTheCustoms(10, 3200) - 5971.2) < 1);
    assert(fabs(CostOfTheCustoms(14, 1600) - 9952) < 1);
}

float Test_3() {
    assert(fabs(TotalCostInByn(2000, 2453.2, 2, 5500) - 20297.73) < 1);
    assert(fabs(TotalCostInByn(3000, 7636, 7, 3000) - 24002.98) < 1);
    assert(fabs(TotalCostInByn(7000, 4500, 14, 1600) - 38719.50) < 1);
}
*/
#undef main
int main() {
    double test = 0.01;
    printf("%f\n", CostOfTheDistillation(20) - 31.10);
    assert(CostOfTheDistillation(20) - 31.10 < eps);
    assert(CostOfTheCustoms(2, 5500)) - 10263 < eps);
    assert(TotalCostInByn(2000, 2453.2, 2, 5500) - 20297.73 < eps);
    printf("Great job!!!");
}
