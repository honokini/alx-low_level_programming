#include <stdio.h>
/**
 * main -Prints the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to string
 * Return: always 0
 */
int main(int argc, char *argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return 0;
}
