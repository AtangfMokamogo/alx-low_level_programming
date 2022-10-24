#include "main.h"

/**
 * swap_int - interchanges the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int exc = *a;
	*a = *b;
	*b = exc;
}
