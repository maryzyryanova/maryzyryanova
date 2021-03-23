#include <assert.h>
#include "functions.h"
#include <float.h>
#include <stdio.h>
#include <math.h>

float Test_1() {
    assert(CostOfTheDistillation(2453.2) - 3814.73 < 1);
    assert(CostOfTheDistillation(7636) - 11873.98 < 1);
}

float Test_2() {
    assert(CostOfTheCustoms(2, 5500) - 10263 < 0.01);
    assert(CostOfTheCustoms(5, 2000) - 3732 < 0.01);
    assert(CostOfTheCustoms(7, 3000) - 2799 < 0.01);
    assert(CostOfTheCustoms(10, 3200) - 5971.2 < 0.01);
    assert(CostOfTheCustoms(14, 1600) - 9952 < 0.01);
}

float Test_3() {
    assert(TotalCostInByn(2000, 2453.2, 2, 5500) - 20297.73 < 0.01);
    assert(TotalCostInByn(3000, 7636, 7, 3000) - 24002.98 < 0.01);
    assert(TotalCostInByn(7000, 4500, 14, 1600) - 38719.50 < 0.01);
}

#undef main
int main() {
    Test_1();
    Test_2();
    Test_3();
    printf("Great job!!!");
}
