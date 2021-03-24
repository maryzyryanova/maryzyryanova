#include <stdio.h>
#include <math.h>
#include "functions.h"

unsigned int CountFactorialRec(unsigned int n)
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

unsigned int CountFactorialIter(unsigned int n) 
{
    if (n == 1 || n == 0)
    {
        return 1;    
    }
    else
    {
        int i, result = 1;
        for (i = 1; i <= n; i++)
        {
            result *= (2*i - 1);
        }
        return result;
    }
}

float CountRightRec(unsigned int n, float angle)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        float result = 0., ang;
        int i, a = -1;
        for (i = 1; i <= n - 1; i++)
        {
            a *= -1;
        }
        for (i = 1; i < (2 * n) - 1; i++)
        {
            int j;
            for(j = 1; j < i; j++)
            {
                ang = angle * angle;   
            }
        }
        result += a * ang / CountFactorialRec(n);
        return (result + CountRightRec(n - 1, angle));
    }
}

float CountRightIter(unsigned int n, float angle) 
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        float i, j, right = 0.;
        for (i = 1.; i <= n; i++)
        {
            right += pow(-1, (i - 1)) * powf(angle, ((2 * i) - 1)) / CountFactorialIter(i);
        }
        return right;
    }
}
