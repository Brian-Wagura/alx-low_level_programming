#include "main.h"

/**
 * 
 * rot13 - Encodes a string using rot13 encryption
 * @s: The string to be encoded
 * 
 * Return: A pointer to the encoded string.
*/

char rot13(char *str)
{
    int i, j;
    char alphabet[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot13_alphabet[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 52; j++)
        {
            if (str[i] == alphabet[j])
            {
                str[i] = rot13_alphabet[j];
                break;
            }
        }
    }

    return str;
}
