#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "functions.h"

void test()
{
    int array[3][4];
    int **pointer;
    pointer = &array;
    assert(Index_Row(*(&pointer), 4, 0) == -1);
    assert(Index_Column(*(&pointer), 3, 2) == 2);
    assert(Delete_Rows(3, 4, *(&pointer)) == 3);
    assert(Delete_Columns(3, 4, *(&pointer)) == 2);
}
#undef main
int main() {
  test();
  return 0;
}
