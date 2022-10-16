#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void_print(const char * const format, ...)
{
	va_valist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			}j++;
		}
		switch (format[i])
		{
			case 1:
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 2: 
				printf("%d", va_arg(valist, int)), c = 2;
				break;
			case 3:
				prinf("%f", va_arg(valist, double)), c = 3;
				break;
			case 4:
				str = va_arg(valist, char *), c = 5;
				if (!str)
				{
					printf(
