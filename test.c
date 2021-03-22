#include <assert.h>
#include "functions.c"
#include <float.h>

float Test_1() {
    assert(CostOfTheDistillation(2453.2) - 1226.6 < 0.0000001);
    assert(CostOfTheDistillation(763671) - 381835.5 < 0.0000001);
    assert(CostOfTheDistillation(4500) - 2250 < 0.0000001);
}

float Test_2() {
    assert(CostOfTheCustoms(2, 5500) - 3300 < 0.000001);
    assert(CostOfTheCustoms(5, 2000) - 1200 < 0.000001);
    assert(CostOfTheCustoms(7, 3000) - 900 < 0.000001);
    assert(CostOfTheCustoms(10, 3200) - 1920 < 0.000001);
    assert(CostOfTheCustoms(14, 1600) - 3200 < 0.000001);
}

float Test_3() {
    assert(TotalCostInByn(2000, 2453.2, 2, 5500) - 20297.726 < 0.000001);
    assert(TotalCostInByn(3000, 763671, 7, 3000) - 1195780.05 < 0.000001);
    assert(TotalCostInByn(7000, 4500, 14, 1600) - 38719.5 < 0.000001);
}

#undef main
int main() {
    Test_1();
    Test_2();
    Test_3();
    printf("Great job!!!");
}
