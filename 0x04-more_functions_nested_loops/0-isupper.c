#include "main.h"
#include <stdio.h>

/**
 * _isupper - function to check if
 *           character is uppercase
 * @c: The caracter to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'z')
        {
                return (1);
        }
        else
        {
                return (0);
        }

}
