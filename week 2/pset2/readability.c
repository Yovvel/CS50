#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get user input
    string text = get_string("Text: ");

    // count the number of characters in the text
    int letters = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // checking if character is in the Alphabet, then add 1 to variable letters.
        if (isalpha(text[i]))
        {
            letters++;
        }
    }

    // count the number of words in the text
    int words = 1;              //starts with 1, because the first word begins without a space.
    for (int i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i]) && text[i] != 0)
        {
            words++;
        }
    }

    // count the number of sentence in the text
    int sentence = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.'  || text[i] == '?'  || text[i] == '!')
        {
            sentence++;
        }
    }

    // Calculate the Coleman-Liau  index
    float avgLetters = (float)letters * 100 / words;
    // gemiddelde aantal zinnen per 100 woorden is
    float avgSentence = (float)sentence * 100 / words;
    // index = 0.0588 * L - 0.296 * S - 15.8

    float index = round(0.0588 * avgLetters - 0.296 * avgSentence - 15.8);

    int grade = index;
    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade <= 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
