#include "main.h"
/**
 * _sqrt_recursion - evaluate function sqrt
 * @i: integer
 * @n: integer
 * Return: evaluate sqrt
 */
int _sqrt_recursion(int i, int n)
{
if (n == 0 || n == 1)
return (n);
else if (i * i < n)
return (_sqrt_recursion(i + 1, n));
else if (i * i == n) /*Condition base*/
return (i);

return (-1);
}
