#include <assert.h>
#include "functions.h"
#include <float.h>
#include <stdio.h>

float Test_1() {
    assert(CostOfTheDistillation(2453.2) == 1226.60);
    assert(CostOfTheDistillation(763671) == 381835.50);
    assert(CostOfTheDistillation(4500) == 2250.00 );
}

float Test_2() {
    assert(CostOfTheCustoms(2, 5500) - 3300 < 0.00001);
    assert(CostOfTheCustoms(5, 2000) - 1200 < 0.00001);
    assert(CostOfTheCustoms(7, 3000) - 900 < 0.00001);
    assert(CostOfTheCustoms(10, 3200) - 1920 < 0.00001);
    assert(CostOfTheCustoms(14, 1600) - 3200 < 0.00001);
}

float Test_3() {
    assert(TotalCostInByn(2000, 2453.2, 2, 5500) == 20297.73);
    assert(TotalCostInByn(3000, 7636, 7, 3000) == 24002.98);
    assert(TotalCostInByn(7000, 4500, 14, 1600) == 38719.50);
}

#undef main
int main() {
    Test_1();
    Test_2();
    Test_3();
    printf("Great job!!!");
}
