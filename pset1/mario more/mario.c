#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt the user for the height of the pyramid
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height <= 0);

    // create the pyramid
    // each row
    for (int i = 0; i < height; i++)
    {
        // each line
        printf("%*s", height - i - 1, ""); // trick to save a for loop

        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
