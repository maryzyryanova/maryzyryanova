#include <stdio.h>
#include "function.c"

int main(void) {
    int n;
    double f;
    char a = 'y';
    while (a != 'n') {
        printf("\nn = ");
        scanf("%d", &n);
        while (n <= 0)
        {
            printf("\nIncorrect input, try again!");  
            printf("\nn = ");
            scanf("%d", &n);  
        }
        printf("f = ");
        scanf("%lf", &f);
        double answer = function(n, f);
        printf("p = %.20e", answer);
        printf("\nDo you want to continue?\nAnswer: ");
        scanf("%s", &a);
    }
}
   
