#include "main.h"
/**
 * _strcpy - copiar el contenido de uno a otra variable
 * @dest: This is destiny
 * @src: This is the copia
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*scr != '\0')
	{
		*dest = *scr;
		dest++;
		scr++;
	}
	*dest = '\0';
	return (start);
}
