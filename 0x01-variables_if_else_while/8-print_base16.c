#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints a hexadecimal string
*
*Return: Always (Success)
*/
int main(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
