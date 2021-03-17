// Copyright 2021 Mary Zyryanova.
#include <stdio.h>
#include "mylib/function.h"

int main(void) {
    int n;
    double f;
    char a = 'y';
    while (a != 'n') {
        printf("p = %f", Function(n, f));
        printf("\nDo you want to continue?\nAnswer: ");
        scanf("%s", &a);
    }
}
