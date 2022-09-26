#include "main.h"

/**
 * _strchr - Locates a character in string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurence of the character c in the string s
 * 
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declararing WHILE*/
	{
		if (*s == c) /*if s == c */
		{
			return (s); /*return s*/
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	reurn (0);/* values null*/
}
