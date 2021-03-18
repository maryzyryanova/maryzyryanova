#include <stdio.h>
#include <math.h>
#include "function.h"

double function(int n, double f) {
    double answer = 1.0;
    int i;
    for (i = 1; i <= n; i++) {
        double current = 0.;
        nt k
        for (k = 0; k <= i; k++) {
            current += f + k;
        }
        answer *= 1. / current;
    }
    return answer;
}
