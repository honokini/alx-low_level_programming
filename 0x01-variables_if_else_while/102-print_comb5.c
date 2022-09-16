#include <time.h>
#include <stdio.h>
/**
*
* main - print possible combination of two 2-gigit
* numbers
*
* Return: return zero at the end
*/
int main(void)
{
int i, p;

for (i = 0; i <= 100; i++)
{
	for (p = 0; p < 100; p++)
	{
		if (p > i)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
		}
	}
}

}

putchar('\n');
return 0;
}
