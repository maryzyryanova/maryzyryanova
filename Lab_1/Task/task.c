#include <stdio.h>
#include <math.h>
#include "header.c"

int main()
{
    int n;
    double f;
    char a = 'y';
    while(a != 'n')
    {
        printf("n = ");
        scanf("%d", &n);
        printf("f = ");
        scanf("%lf", &f);
        double answer = 1.0;
        for(int i = 1; i <= n; i++)
        {
            double current = 0;
            for(int k = 0; k <= i; k++)
            {
                current += f + k;
            }
            answer *= 1. / current;
        }
        printf("p = %g", answer);
        printf("\nDo you want to continue?\nAnswer: ");
        scanf("%s", &a);
    }
}