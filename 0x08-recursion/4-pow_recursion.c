#include "main.h"
/**
 * _pow_recursion - returns the value of y
 * @x: integer
 * @y: integer
 * Return: pow recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /*Base condition*/
	{
		return (- 1);
	}
	else if (y != 0)
		return ((x * -pow_recursion(x, y - 1))); /* Recursion call*/
	else
		return (1);
}
