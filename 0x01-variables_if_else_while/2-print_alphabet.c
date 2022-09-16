#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - lowercase alphabets
*
* Return:  Always(Success)
*/
int main(void)
{ 
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}

putchar('\n');
return (0);
}
