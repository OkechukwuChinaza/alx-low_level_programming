#include "main.h"

/**
 * puts2 - This will function should print only one char out of two
 * starting with the first one
 * @str: input
 * Return: will print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (x = 0 ; x <= t; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
