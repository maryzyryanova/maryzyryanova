#include <assert.h>
#include "Task2.c"

#undef main
int main()
{
    assert(CountFactorialRec(2) - 2 < 0.01);
    assert(CountFactorialIter(3) - 6 < 0.01);
    assert(CountRightRec(2, 30) - 0.475750 < 0.01);
    assert(CountRightIter(3, 60) - 0.748360 < 0.01);
    printf("Scooooooooooby-Doooooooby-Doooooo");
}