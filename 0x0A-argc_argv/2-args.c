#include <stdio.h>

/**
 * main - points all arguments it receives
 * @argc: number of arguments passed to the function
 * @argv: arguments vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, int *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\s", argv[i]);
	}
	return (0);
}
