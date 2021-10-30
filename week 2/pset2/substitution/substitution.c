#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    // check if  correct argument is given by the user
    // check if only 1 argument is given and that the argument is 26 characters long
    if (argc != 2 || strlen(argv[1]) != 26)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string key = argv[1];
    int keyLength = strlen(key);

    //  check if the given key contains only alphabethical characters
    for (int i = 0; i < keyLength; i++)
    {
        if (isalpha(key[i]) == 0)
        {
            printf("Usage: ./substitution key, only alhabetical characters\n");
            return 1;
        }
    }

    //  check if the given key doesn't contain  any  dublicates
    for (int i = 0; i < keyLength; i++)
    {
        for (int k = 0; k < i; k++)
        {
            if (key[i] == key[k])
            {
                printf("dublicate found  in key\n");
                return 1;
            }
        }
    }

    // get the text from user
    string  plainText = get_string("Plaintext: ");
    string cypherText = "";

    printf("ciphertext: %s", cypherText);

    for (int i = 0; i < strlen(plainText); i++)
    {
        if isupper(plainText[i])
        {
            printf("%c", toupper(key[plainText[i] - 65]));
        }
        // if lowercase letter, start with 97, this way we keep upper and lowercase letters  intact
        else if islower(plainText[i])
        {
            printf("%c", tolower(key[plainText[i] - 97]));
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
