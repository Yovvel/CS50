#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for start size
    int startSize;
    do
    {
        startSize = get_int("Start Size: ");
    }
    while (startSize < 9);
    // Prompt the user for end size

    int endSize;
    do
    {
        endSize = get_int("End Size: ");
    }
    while (endSize < startSize);

    // Calculate number of years until we reach threshold
    int years = 0;
    int growth = 0;
    for (int i = startSize; i < endSize; i = i + growth)
    {
        int born = startSize / 3;
        int passed = startSize / 4;
        growth = born - passed;
        startSize = startSize + growth;
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
