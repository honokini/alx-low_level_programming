#include "main.h"
/**
 * print_rev - This function prints a reverse string
 *
 * @s: This thr input string
 */
void print_rev(char *s)
{
	int index;

	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
