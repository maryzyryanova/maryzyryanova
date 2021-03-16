// Copyright 2021 Mary Zyryanova.
#include <stdio.h>
#incliude "function.h"

int main(void) {
    int n;
    double f;
    char a = 'y';
    while (a != 'n') {
        Function(n, f);
        printf("\nDo you want to continue?\nAnswer: ");
        scanf("%s", &a);
    }
}
