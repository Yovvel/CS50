#include  <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    // global variables
    float dollars;
    int coins = 0;
    // --------------------------------------

    // get user input about the amount of change to received
    do
    {
        dollars = get_float("Change owed: ");
    }
    while(dollars <= 0);

    int cents = round(dollars * 100);
    while(cents > 0)
    {
        if(cents - 25 >= 0)
        {
            cents = cents - 25;
            coins++;
            printf("%i coins, %i cents\n", coins, cents);
        }
        else if(cents - 10 >= 0)
        {
            cents = cents - 10;
            coins++;
            printf("%i coins, %i cents\n", coins, cents);
        }
        else if(cents - 5 >= 0)
        {
            cents = cents - 5;
            coins++;
            printf("%i coins, %i cents\n", coins, cents);
        }
        else if(cents - 1 >= 0)
        {
            cents = cents - 1;
            coins++;
            printf("%i coins, %i cents\n", coins, cents);
        }
    }
    printf("%i\n", coins);
}
