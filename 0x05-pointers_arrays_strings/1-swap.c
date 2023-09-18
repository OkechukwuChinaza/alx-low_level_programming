#include "main.h"

/**
 * swap_int - This will swap the values of two integers
 * @a: The integer to swap
 * @b: The integer to swap
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
