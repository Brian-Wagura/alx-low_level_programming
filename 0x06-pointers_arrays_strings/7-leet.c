#include "main.h"


/**
 * leet - encode a string to 1337
 * @s: string
 *
 * Return: string
 */


char *leet(char *string)
{
    char *leet_chars = "431071";
    char *normal_chars = "aeotlAEOTL";
    int i, j;

    for (i= 0; i < strlen(normal_chars); i++)
    {
        for (j = 0; j < strlen(string); j++)
        {
            if (string[j] == normal_chars[i])
            {
                string[j] = leet_chars[i/2];
            }
        }
    }

    return string;

}
