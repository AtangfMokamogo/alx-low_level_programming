#include "main.h"
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		putchar('-');
		x = -x;
	}

	if ((x / 10) > 0)
	{
		print_number(x / 10);
	}

	putchar((x % 10) + '0');
}
