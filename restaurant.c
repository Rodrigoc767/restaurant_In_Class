/* 
    Write a program that computes the tax and tip on a restaurant bill for a patron. 

    1. Ask the user for the tax percent of tax and the gratuity percent they would like to give and assign it to the appropriate
        variable.

    2. Create a random number generator from 0-3 that will randomly select the meal cost.

    0 Salad: $9.95
    1 Soup: $4.55
    2 Sandwich: $13.25
    3 Pizza: $22.35

    3. I will assign the randomly generated number to an int.

    4. I will use an if else statement to determine the mathmatical equation and return and 
        print the total tip, tax, meal cost, and grand total


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    double tax, tip, grandTotal;
    int meal;
    printf("What is the tax percentage? ie. 9.5\n");
    scanf("%lf", &tax);

    printf("What is the tip percentage? ie. 10\n");
    scanf("%lf", &tip);

    tax = tax/100;
    tip = tip/100;

    srand(time(0));
    
    for(int i = 0; i < 4; i++)
        meal = rand() % 4; 
        printf("Meal number: %d\n", meal);

    if(meal == 0)
    {
        printf("\nYour meal was the salad, which cost $9.95: \n");
        tax = 9.95 * tax;
        tip = 9.95 * tip;
        grandTotal = 9.95 + tax + tip;

        printf("*****************Bill***********************\n");
        printf("Meal Cost:--------$9.95\n");
        printf("Meal tax:---------$%.2lf\n", tax);
        printf("Meal tip:---------$%.2lf\n", tip);
        printf("Grand Total:------$%.2lf", grandTotal);
        printf("\nTHANK YOU, COME AGAIN");

        return 0;
    }
    else if(meal == 1)
    {
    printf("Your meal was the soup, which cost $4.55: \n");
        tax = 4.55 * tax;
        tip = 4.55 * tip;
        grandTotal = 4.55 + tax + tip;

        printf("*****************Bill***********************\n");
        printf("Meal Cost:--------$4.55\n");
        printf("Meal tax:---------$%.2lf\n", tax);
        printf("Meal tip:---------$%.2lf\n", tip);
        printf("Grand Total:------$%.2lf\n", grandTotal);
        printf("\nTHANK YOU, COME AGAIN");


        return 0;
    }
    else if(meal == 2)
    {
    printf("Your meal was the soup, which cost $13.25: \n");
        tax = 13.25 * tax;
        tip = 13.25 * tip;
        grandTotal = 13.25 + tax + tip;

        printf("*****************Bill***********************\n");
        printf("Meal Cost:--------$13.25\n");
        printf("Meal tax:---------$%.2lf\n", tax);
        printf("Meal tip:---------$%.2lf\n", tip);
        printf("Grand Total:------$%.2lf\n", grandTotal);
        printf("\nTHANK YOU, COME AGAIN");


        return 0;
    }
    else if(meal == 3)
    {
    printf("Your meal was the soup, which cost $22.35: \n");
        tax = (22.35 * tax);
        tip = 22.35 * tip;
        grandTotal = 22.35 + tax + tip;


        printf("*****************Bill***********************\n");
        printf("Meal Cost:--------$22.35\n");
        printf("Meal tax:---------$%.2lf\n", tax);
        printf("Meal tip:---------$%.2lf\n", tip);
        printf("Grand Total:------$%.2lf\n", grandTotal);
        printf("\nTHANK YOU, COME AGAIN");

        return 0;
    }

    return 0;
}