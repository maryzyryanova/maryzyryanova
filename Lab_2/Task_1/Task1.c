#include <stdio.h>
#include <stdlib.h>
#include "Task1.h"

int main()
{
    unsigned int number, year, select;
    float cost, value, distance;
    while(1)
    {
        Menu();
        printf("Enter the number of the function: ");
        switch(EnterTheNumber(number))
        {
            case 1: 
                clrscr();
                printf("The cost of the car (€): ");
                scanf("%f", &cost);
                clrscr();
                break;
            case 2: 
                clrscr();
                printf("The year of the car: ");
                scanf("%d", &year);
                clrscr();
                break;
            case 3:
                clrscr();
                printf("The engine value of the car (cc):  ");
                scanf("%f", &value);
                clrscr();
                break;
            case 4:
                clrscr();
                printf("The run distance of the car (km): ");
                scanf("%f", &distance);
                clrscr();
                break;
            case 5:
            clrscr();
                presentData(distance,year,value,cost);
                break;
            case 6:
                clrscr();
                Information();
                break;
            case 7:
                clrscr();
                Exit();
                break;
        }
    }
}

void clrscr()
{
    system("@cls || clear");
}

void presentData(float distance, unsigned int year, float value,float cost )
{
    printf("The cost of the distillation of the car: %f", CostOfTheDistillation(distance));
    printf("\nThe cost of the customs of the car: %f", CostOfTheCustoms(year, value));
    printf("\nThe total cost of the car (in byn): %f\n", TotalCostInByn(cost, distance, year, value));
}

void Menu()
{
    printf("1. Enter the cost of the car\n");
    printf("2. Enter the year of issue of the car\n");
    printf("3. Enter the engine volume of the car\n");
    printf("4. Enter the run distance of the car\n");
    printf("5. Calculation of the cost of the service\n");
    printf("6. Information about the version and the author of the program\n");
    printf("7. Exit the program\n");
}

int EnterTheNumber(unsigned int number)
{
    scanf("%d", &number);
    while(number > 7)
    {
        printf("Sorry, there is no function with this number, please re-enter\n");
        printf("Enter the number of the function: ");
        scanf("%d", &number); 
    }
    return number;
}

float CostOfTheDistillation(float distance)
{
    float distillation = 0.5 * distance;
    return distillation;
}

float CostOfTheCustoms(unsigned int year, float value)
{
    float customs;
    if(year < 3)
    {
        customs = 0.6 * value;
    }
    if (year >= 3 && year < 10)
    {
        if (value > 2500)
        {
            customs = 0.3 * value;
        }
        else
        {
            customs = 0.6 * value;    
        }
    }
    if (year > 10 && year < 14)
    {
        customs = 0.6 * value;
    }
    if (year >= 14)
    {
        customs = 2.0 * value;
    }
    return customs;
}

float TotalCostInByn(float cost, float distance, unsigned int year, float value)
{
    float total = (cost + CostOfTheDistillation(distance) + CostOfTheCustoms(year, value)) * 3.11;
    return total; 
}

void Information() 
{
    printf("The author: Mary Zyryanova\nThe version of the program: C98\n");
}

void Exit()
{
    exit(0);
}