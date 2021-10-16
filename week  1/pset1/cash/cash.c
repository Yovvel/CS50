#include  <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
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
    while (dollars <= 0);

    // fix for floating point error
    int cents = round(dollars * 100);

    // see how many coins fit in the change
    while (cents > 0)
    {
        if (cents - 25 >= 0)
        {
            cents = cents - 25;
        }
        else if (cents - 10 >= 0)
        {
            cents = cents - 10;
        }
        else if (cents - 5 >= 0)
        {
            cents = cents - 5;
        }
        else if (cents - 1 >= 0)
        {
            cents = cents - 1;
        }
        coins++;
    }
    printf("%i\n", coins);
}
