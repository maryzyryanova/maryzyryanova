// Copyright 2021 Mary Zyryanova.
#include <stdio.h>
#include <math.h>
#include "function.h"

double Function(int n, double f) {
    printf("/nn = ");
    scanf("%d", &n);
    printf("f = ");
    scanf("%lf", &f);
    double answer = 1.0;
    for (int i = 1; i <= n; i++) {
        double current = 0;
        for (int k = 0; k <= i; k++) {
            current += f + k;
        }
        answer *= 1. / current;
    }
    return answer;
}
