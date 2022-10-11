#include <stdio.h>
/**
 * main - Prints single digit numbers starting from 0 to 9.
 * Description: Using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 58; c <= 57; c++)
	{
		putchar(c);

		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
