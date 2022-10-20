#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a line inthe terminal with the '_' character
 * @n: the length of the line to be printed
 *
 * Return: if n <== 0, print new line otherwise print line of lenght n
 */
void print_line(int n)
{
	int lineLength;

	if (n > 0)
	{
		for (lineLength = 0; lineLength < n; lineLength++)
		{
			putchar('_');
		}
	}

	putchar('\n');
}
