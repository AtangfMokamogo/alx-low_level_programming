#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - uses the \ charcter to draw a diagonal line in the terminal
 * @n: The number of \ characters to be printed
 *
 * Return: If n is 0 or less, the function should only print a \n
 */

void print_diagonal(int n)
{
	int length;
	int spacing;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (spacing = 0; spacing < length; spacing++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (length == n - 1)
			{
				continue;
			}
			putchar('\n');
		}
	}

	putchar('\n');
}
