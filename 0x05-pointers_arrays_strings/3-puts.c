#include "main.h"

/**
 * _puts - This will a print a string, followed by a new line, to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
