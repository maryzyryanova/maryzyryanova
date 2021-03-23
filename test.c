#include <assert.h>
#include "functions.h"

#undef main
int main()
{
    assert(CountFactorialRec(2) - 2 == 0);
    assert(CountFactorialIter(3) - 6 == 0);
    assert(CountRightRec(2, 30) - 0.475750 < 0.00000001);
    assert(CountRightIter(3, 60) - 0.748360 < 0.0000001);
    printf("Scooooooooooby-Doooooooby-Doooooo");
}
