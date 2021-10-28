#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // check if  correct argument is given by the user
    if (argc != 2 || !isdigit(argv[1][0]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            return 1;
        }
    }

    // get thext to cypher
    int key = atoi(argv[1]);
    string  plainText = get_string("Plaintext: ");

    printf("ciphertext: ");

    // encrypt the given text
    for (int i = 0, n = strlen(plainText); i < n; i++)
    {
        // if uppercase letter start with 65
        if isupper(plainText[i])
        {
            printf("%c", (((plainText[i] + key) - 65) % 26) + 65);
        }
        // if lowercase letter, start with 97, this way we keep upper and lowercase letters  intact
        else if islower(plainText[i])
        {
            printf("%c", (((plainText[i] + key) - 97) % 26) + 97);
        }

        // we keep all the non afabetical letteers as it is.
        else
        {
            printf("%c", plainText[i]);
        }

    }
    printf("\n");
    return 0;
}
