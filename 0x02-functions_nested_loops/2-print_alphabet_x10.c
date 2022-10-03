#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int j, x;

	for (x = 0; x <= 9; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
			{
				_putchar(j);
			}
		_putchar('\n');
	}
}
