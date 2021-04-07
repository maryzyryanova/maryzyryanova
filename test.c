#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

#define N 3
#define M 4

void test()
{
    int i;
    int** array = (int**)malloc(N * sizeof(int*));
    for (i = 0; i < N; i++) {
        array[i] = (int*)malloc(M * sizeof(int));
    }
    assert(Index_Row(array, N, 0) == -1);
    assert(Index_Column(array, M, 2) == 2);
    assert(Delete_Rows(N, M, array == 3);
    assert(Delete_Columns(N, M, array == 2);
}
#undef main
int main() {
  test();
  return 0;
}
