#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints if the number is positive, zero, or negative
 * Description: Using the main function
 * this program prints "prgramming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
