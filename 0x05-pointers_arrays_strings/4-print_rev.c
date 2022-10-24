#include "main.h"
#include <stdio.h>


/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int step = 0, index;

	while (s[index++])
	{
		step++;
	}

	for (index = step - 1; index >= 0; index--)
	{
		putchar(s[index]);

	}
	putchar('\n');
}
