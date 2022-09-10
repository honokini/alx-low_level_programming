#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int n,
	    srand(time(0));
	n=rand() - RANDMAX / 2;
	if (n==0)
	{
		printf("%i is zero\n", n);
	}

	else if(n<0)
	{
		printf("%i is negative\n",n);
	}

	else
	{
		print("%i is positive\n", n);
	}

	return (0);
}
