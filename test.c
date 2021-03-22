#include <assert.h>
#include "functions.c"
#include <float.h>

float Test_1() {
    assert(CostOfTheDistillation(2453.2) - 1226.6 < DBL_EPSILON);
    assert(CostOfTheDistillation(763671) - 381835.5 < DBL_EPSILON);
    assert(CostOfTheDistillation(4500) - 2250 < DBL_EPSILON);
}

float Test_2() {
    assert(CostOfTheCustoms(2, 5500) - 3300 < DBL_EPSILON);
    assert(CostOfTheCustoms(5, 2000) - 1200 < DBL_EPSILON);
    assert(CostOfTheCustoms(7, 3000) - 900 < DBL_EPSILON);
    assert(CostOfTheCustoms(10, 3200) - 1920 < DBL_EPSILON);
    assert(CostOfTheCustoms(14, 1600) - 3200 < DBL_EPSILON);
}

float Test_3() {
    assert(TotalCostInByn(2000, 2453.2, 2, 5500) - 20297.726 < DBL_EPSILON);
    assert(TotalCostInByn(3000, 763671, 7, 3000) - 1195780.05 < DBL_EPSILON);
    assert(TotalCostInByn(7000, 4500, 14, 1600) - 38719.5 < DBL_EPSILON);
}

#undef main
int main() {
    Test_1();
    Test_2();
    Test_3();
    printf("Great job!!!");
}
