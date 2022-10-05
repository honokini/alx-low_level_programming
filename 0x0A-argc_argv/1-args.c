#include <stdio.h>

/**
 * main - prints the name number of arguments passed to it
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unsuded)))
{
	printf("%d\n", argc - 1);
	return (0);
}
