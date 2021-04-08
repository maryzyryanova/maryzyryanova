#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "task.c"
#include "functions.h"

void test()
{
    int array[3][4] = {(1, 1, 1, 0), (0, 0, 0, 0), (1, 1, 0, 1)};
    assert(Index_Row(3, 4, array) == -1);
    assert(Index_Column(3, 4, array) == 2);
    assert(Delete_Rows(3, 4, array) == 3);
    assert(Delete_Columns(3, 4, array) == 2);
}

#undef main

int main() 
{
  test();
  return 0;
}
