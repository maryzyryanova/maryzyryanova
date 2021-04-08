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
    Fill_Array(N, M, array);
    assert(Index_Row(array, M, 0) == -1);
    assert(Index_Column(array, N, 2) == 2);
    assert(Delete_Rows(N, M, array) == 3);
}
#undef main
int main() {
  test();
  return 0;
}
