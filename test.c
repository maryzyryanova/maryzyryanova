#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

#define N 3
#define M 4
void test()
{
    int *array;
    array = (int*)malloc(N*M*sizeof(int)); 
    assert(Index_Row(&array, M, 0) == -1);
    assert(Index_Column(&array, N, 2) == 2);
    assert(Delete_Rows(N, M, &array) == 3);
    assert(Delete_Columns(N, M, &array) == 2);
}
#undef main
int main() {
  test();
  return 0;
}
