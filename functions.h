#define MAX_STRING_LENGTH 100
#define MAX_AMOUNT_OF_STRINGS 6

typedef struct
{
    int count_a;
    int count_e;
    int count_i;
    int count_o;
    int count_u;
    int count_y;
}vowels;

vowels AmountOfVowels(char array[MAX_AMOUNT_OF_STRINGS][MAX_STRING_LENGTH]);
void DrawDiagram(vowels func);