#include "main.h"

/**
 * rev_string - this will reverse a string
 * @s: The input string
 * Return: The strings in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}