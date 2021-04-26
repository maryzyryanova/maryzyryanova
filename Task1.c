#include "functions.c"

int main()
{
    unsigned int number, year, cost, value,distance;
    while(1)
    {
        Menu();
        printf("Enter the number of the function: ");
        switch(EnterTheNumber(number))
        {
            case 1: 
                clrscr();
                printf("The cost of the car (€): ");
                while (scanf("%u", &cost) != 1) 
                {
                    if (scanf("%u", &cost) != 1) 
                    {
                    printf("Incorrect input, try again!");  
                    printf("\nn = ");
                    while(getchar() != '\n') {}
                    }
                }
                clrscr();
                break;
            case 2: 
                clrscr();
                printf("The year of the car: ");
                while (scanf("%u", &year) != 1) 
                {
                    if (scanf("%u", &year) != 1) 
                    {
                    printf("Incorrect input, try again!");  
                    printf("\nn = ");
                    while(getchar() != '\n') {}
                    }
                }
                clrscr();
                break;
            case 3:
                clrscr();
                printf("The engine value of the car (cc):  ");
                while (scanf("%u", &value) != 1) 
                {
                    if (scanf("%u", &value) != 1) 
                    {
                    printf("Incorrect input, try again!");  
                    printf("\nn = ");
                    while(getchar() != '\n') {}
                    }
                }
                clrscr();
                break;
            case 4:
                clrscr();
                printf("The run distance of the car (km): ");
                while (scanf("%u", &distance) != 1) 
                {
                    if (scanf("%u", &distance) != 1) 
                    {
                    printf("Incorrect input, try again!");  
                    printf("\nn = ");
                    while(getchar() != '\n') {}
                    }
                }
                clrscr();
                break;
            case 5:
            clrscr();
                PresentData(distance, year, value, cost);
                break;
            case 6:
                clrscr();
                Information();
                break;
            case 7:
                clrscr();
                exit(0);
                break;
        }
    }
}
