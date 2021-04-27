#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    push_r(1);
    push_r(12);

    printf("%d", get(1)->x);

    return 0;
}
