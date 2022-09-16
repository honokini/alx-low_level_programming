#include <time.h>
#include <stdio.h>
/**
* main - print single digit numbers starting from 0
*
* Return: return zero at the end
*/
int main()
{
	int i,j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <=9; j++)
		{
			if (j > i)
			{
				putchar(',');
                                putchar(' ');

			}
			putchar(i + '0');
                        putchar(j + '0');

		}
	

putchar('\n');

return (0);
}
