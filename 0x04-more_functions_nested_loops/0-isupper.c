#include "main.h"
/**
 * _isupper -vchecks if a character is uppercase or not
 * @c: character to be tested
 * Return: 1 whether it is, o otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}
