#includde <stdio.h>
#include "main.h"
/**
 * print_line - prins a straight line
 * @c: parameter
 * Returns nothing
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
