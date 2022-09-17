#include "main.h"
/**
 * main -> prints the lowercase of alphabets called print_alphabet_x10
 * Return: 0
 */

void print_alphabet_x10(void) 
{
int j;
int x;

for (x = 0; x <= 9; x++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
