#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"

#define MAX_AMOUNT_OF_STRINGS 28
#define MAX_STRING_SIZE 100

int StringLength(char* name)
{
    int size = 0, i;
    for (i = 0; name[i] != '\0'; i++)
    {
        size++;     
    }
    return size;
}

bool CompareStrings(char* array, char* test)
{
    int i;
    if(StringLength(array) != StringLength(test))
    {
        return true;
    }
    
    for(i = 0; i < StringLength(array); ++i) 
    {
        if(array[i] != test[i])
        {
            return true;
        }
    }
    return false;
}

void UpperCase(char* name)
{
    int i;
    for (i = 0; i < StringLength(name); i++) {
        if (name[i] != ' ')
        {
            continue;
        }
        while (name[i] == ' ')
        {
            i++;
        } 
        if (name[i] > 90) 
        {
            name[i] -= 32;
            break;
        }
    }
}


void Quick_Sort(char** array, int start, int finish, int position)
{
    int left = start;
    int right = finish;
    char* pointer = NULL;
    char* pivot = array[(left + right) / 2];
    do 
    {
        while (array[left][position] < pivot[position]) 
        {
            ++left;
        }

        while (array[right][position] > pivot[position])
        {
            --right;
        }
        if (left <= right)
        {
            pointer = array[left];
            array[left] = array[right];
            array[right] = pointer;
            ++left;
            --right;
        }
    } while (left < right);

    if (start < right) 
    {
        Quick_Sort(array, start, right, position);
    }
    if (finish > left) 
    {
        Quick_Sort(array, left, finish, position);
    }
}

void SortArray(char** array, int position)
{
    Quick_Sort(array, 0, MAX_AMOUNT_OF_STRINGS - 1, position);
    int i;
    int temp;
    bool value = true;
    while (position != 5)
    {
        for (i = 0; i < MAX_AMOUNT_OF_STRINGS - 1; i++) 
        {
            value = false;
            temp = i;
            while (i < MAX_AMOUNT_OF_STRINGS - 1 && array[i][position] == array[i + 1][position]) 
            {
                if (array[i][0] < array[i + 1][0])
                {
                    break;
                }
                
                value = true;
                i++;
            }

            if(value)
            {
                Quick_Sort(array, temp, i, position + 1);
            }
        }
        position++;
    }

    for (i = 0; i < MAX_AMOUNT_OF_STRINGS; i++) 
    {
        UpperCase(array[i]);
    }
}
