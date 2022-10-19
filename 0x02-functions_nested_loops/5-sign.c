#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 * @n : the number to be checked
 * Return :1 and prints '+' if n > 0, 0 and prints 0 if n = 0, -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
