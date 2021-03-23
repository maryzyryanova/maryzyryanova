#include <stdio.h>
#include <math.h>
#include "functions.h"

int64_t CountFactorialRec(int64_t n) //using recursion 
{
    if(n == 1 ||n == 0)
    {
        return 1;
    }
    else 
    {
        return ((2 * n - 1) * CountFactorialRec(n - 1));
    }
}

int64_t CountFactorialIter(int64_t n) //using iterating 
{
    if (n == 1 || n == 0)
    {
        return 1;    
    }
    else
    {
        int result = 1;
        for (int i = 1; i <= n; i++)
        {
            result *= (2*i - 1);
        }
        return result;
    }
}

float CountRightRec(int64_t n, float angle) //using recursion
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        float result = 0.;
        result += pow(-1, n - 1) * powf(angle, (2 * n) - 1) / CountFactorialRec(n);
        return (result + CountRightRec(n - 1, angle));
    }
}

float CountRightIter(int64_t n, float angle) //using iterating 
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        float right = 0.;
        for (int i = 1.; i <= n; i++)
        {
            right += pow(-1, (i - 1)) * powf(angle, ((2 * i) - 1)) / CountFactorialIter(i);
        }
        return right;
    }
}