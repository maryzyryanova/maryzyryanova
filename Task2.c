#include <stdio.h>
#include <math.h>
#include "Task2.h"

int main()
{
    unsigned long int n;
    int choice, x;
    float angle, right, left;
    char answer = 'y';
    while (answer == 'y')
    {
        printf("Enter n: ");
        scanf("%ld", &n);
        printf("Enter x: ");
        scanf("%d", &x);
        printf("How do you want to count?\n     1.Using recursion\n     2.Using iterating\n     Answer: ");
        scanf("%d", &choice);
        angle = x * M_PI / 180;
        left = sin(angle);
        switch (choice)
        {
            case 1:
            {
                right = CountRightRec(n, angle);
                printf("The result in the left: %f\n", left);
                printf("The result in the right %f\n", right);
                break;
            }
            case 2:
            {
                right = CountRightIter(n, angle);
                printf("The result in the left: %f\n", left);
                printf("The result in the right %f\n", right);
                break;
            }
        }
        if(right == left)
        {
            printf("They are both equal\n");
        }
        else
        {
            printf("They are not equal\n");
        }
        printf("Do you want to try again?\nAnswer: ");
        scanf("%s", &answer);
    }
}

unsigned long int CountFactorialRec(unsigned long int n) //using recursion 
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

unsigned long int CountFactorialIter(unsigned long int n) //using iterating 
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

float CountRightRec(unsigned long int n, float angle) //using recursion
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

float CountRightIter(unsigned long int n, float angle) //using iterating 
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