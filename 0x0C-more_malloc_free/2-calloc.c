#include "main.h"
#include <stdlib.h>

/**
 * _call - allocates memory for array  of certain number
 *      of elements each of an inpuutted byte size.
 * @nmemb: The number of elements
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails-NULL.
 * Otherwise - a pointer to allocate memory.
 */
voi *_callc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (nmemb == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';
	return(mem);
}