#include "function.h"
#include <assert.h>

double test_function() {
    assert(function(1, 1)) = 3.33333333333333314830e-01;
    assert(function(12, -0.02)) = 1.55670422719344693713e-15;
    assert(function(100, 10.102930)) = 3.39962140661823682055e-311;
}

#undef main
int main() {
    test_function();
}