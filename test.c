#include <assert.h>
#include "functions.h"

#undef main
int main()
{
    assert(CountRightRec(2, 30) - 0.475750 < 0.000001);
    assert(CountRightIter(3, 60) - 0.748360 < 0.000001);
    printf("Scooooooooooby-Doooooooby-Doooooo");
}
