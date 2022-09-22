#include "main.h"

/**
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 *
 * Return: returns pointer to @dest.
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
