#include <stdio.h>
/**
 * main -Prints the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to string
 * Return: always 0
 */
int main(int argc, char __attribute__((unused)), char *argv[])
{
	printf("%s\n", argc[0]);
	return 0;
}
