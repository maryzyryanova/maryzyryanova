#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 100
#define MAX_AMOUNT_OF_STRINGS 6

vowels AmountOfVowels(char array[MAX_AMOUNT_OF_STRINGS][MAX_STRING_LENGTH])
{
    int i, j;
    vowels vowel;
    vowel.count_a = 0;
    vowel.count_e = 0;
    vowel.count_i = 0;
    vowel.count_o = 0;
    vowel.count_u = 0;
    vowel.count_y = 0;
    for (i = 0; i < MAX_AMOUNT_OF_STRINGS; i++)
    {
        for (j = 0; j < sizeof(array[i]); j++)
        {
            if(array[i][j] == 'a' || array[i][j] == 'A')
            {
                vowel.count_a++;
            }

            if(array[i][j] == 'e' || array[i][j] == 'E')
            {
                vowel.count_e++;
            }

            if(array[i][j] == 'i' || array[i][j] == 'I')
            {
                vowel.count_i++;
            }

            if(array[i][j] == 'o' || array[i][j] == 'O')
            {
                vowel.count_o++;
            }

            if(array[i][j] == 'u' || array[i][j] == 'U')
            {
                vowel.count_u++;
            }

            if(array[i][j]== 'y' || array[i][j] == 'Y')
            {
                vowel.count_y++;
            }
        }
    }
    return vowel;
}

void DrawDiagram(vowels func)
{
    int i;
    printf("A ");
    for (i =  0; i < func.count_a; i++)
    {
        printf("_");
    }
    if (i == func.count_a)
    {
        printf("| ");
    }
    printf("%d\n", func.count_a);

    printf("E ");
    for (i =  0; i < func.count_e; i++)
    {
        printf("_");
    }
    if (i == func.count_e)
    {
        printf("| ");
    }
    printf("%d\n", func.count_e);

    printf("I ");
    for (i =  0; i < func.count_i; i++)
    {
        printf("_");
    }
    if (i == func.count_i)
    {
        printf("| ");
    }
    printf("%d\n", func.count_i);

    printf("O ");
    for (i =  0; i < func.count_o; i++)
    {
        printf("_");
    }
    if (i == func.count_o)
    {
        printf("| ");
    }
    printf("%d\n", func.count_o);

    printf("U ");
    for (i =  0; i < func.count_u; i++)
    {
        printf("_");
    }
    if (i == func.count_u)
    {
        printf("| ");
    }
    printf("%d\n", func.count_u);

    printf("Y ");
    for (i =  0; i < func.count_y; i++)
    {
        printf("_");
    }
    if (i == func.count_y)
    {
        printf("| ");
    }
    printf("%d\n", func.count_y);
}