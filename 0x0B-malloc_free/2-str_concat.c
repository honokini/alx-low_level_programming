#include "main.h"
/**
 * str_concat  - a function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: (NULL) in case of failure, but pointer to a new string 
 * in case of success
 */
char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int index, concat_index = 0,  len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		str_concat = malloc(sizeof(char) * len);

	if (str_concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		str_concat[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		str_concat[concat_index++] = s2[index];

	return (str_concat);
}
