#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

#define N 3
#define M 4

void test()
{
    int i;
    char** array = (char**)malloc(N * sizeof(char*));
    for (i = 0; i < N; i++) {
        array[i] = (char*)malloc(M * sizeof(char));
    }
    array[3][4] = { 1, 1, 1, 0,
                    0, 0, 0, 0,
                    1, 1, 0, 1 };
    assert(Index_Row(array[3][4]), N, 0) == -1);
    assert(Index_Column(array[3][4]), M, 2) == 2);
    assert(Delete_Rows(N, M, array[3][4]) == 3);
    assert(Delete_Columns(N, M, array[3][4]) == 2);
}
#undef main
int main() {
  test();
  return 0;
}
