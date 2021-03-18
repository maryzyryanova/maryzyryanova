#include "function.c"

int main(void) {
    unsigned int n;
    double f;
    char a = 'y';
    while (a != 'n') {
        printf("\nn = ");
        while (scanf("%d", &n) != 1) {
            if (scanf("%d", &n) != 1) {
            printf("Incorrect input, try again!");  
            printf("\nn = ");
            while(getchar() != '\n') {}
            }
        }
        
        printf("f = ");
        while (scanf("%lf", &f) != 2) {
            if (scanf("%lf", &f)) {
            printf("\nIncorrect input, try again!");  
            printf("\nf = ");
            while(getchar() != '\n') {}
            }
        }
        
        double answer = function(n, f);
        printf("p = %.20e", answer);
        printf("\nDo you want to continue?\nAnswer: ");
        scanf("%s", &a);
    }
}
   