// Copyright 2021 Mary Zyryanova.
#include <stdio.h>
#include <math.h>
#incliude "function.h"

void Function(int n, double f) {
    printf("n = ");
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
    printf("p = %g", answer);
}
