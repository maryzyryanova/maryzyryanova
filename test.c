#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define MAX_STRINGS_AMOUNT 6

#define MAX_STRING_LENGTH 100

void test()
{
    char array[MAX_AMOUNT_OF_STRINGS][MAX_STRING_LENGTH] = {"All God's children need traveling shoes", 
                                                            "Drive your problems from here", 
                                                            "All good people read good books", 
                                                            "Now your conscience is clear", 
                                                            "I hear you talk girl", 
                                                            "Now your conscience is clear"};
    vowels test = AmountOfVowels(array);
    assert(test.count_a == 8);
    assert(test.count_e == 19);
    assert(test.count_i == 9);
    assert(test.count_o  == 19);
    assert(test.count_u  == 4);
    assert(test.count_y  == 4);                        
}

#undef main;
int main()
{
    test();
    return 0;
}