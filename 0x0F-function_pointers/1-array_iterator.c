#include <stdio.h>
/**
 * array_iterator - Function that executes a function given as parameter.
 * @array: Array of elements.
 * @size: Size of array.
 * @action: Function pointer.
 *
 * Rteturn: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
