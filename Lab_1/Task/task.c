// Copyright 2021 Mary Zyryanova.
#include <stdio.h>
#include "mylib/function.h"

int main(void) {
    int n;
    double f;
    char a = 'y';
    while (a != 'n') {
        printf("\nn = ");
        scanf("%d", &n);
        printf("f = ");
        scanf("%lf", &f);
        double answer = function(n, f);
        printf("p = %.100lf", answer);
        printf("\nDo you want to continue?\nAnswer: ");
        scanf("%s", &a);
    }
}
