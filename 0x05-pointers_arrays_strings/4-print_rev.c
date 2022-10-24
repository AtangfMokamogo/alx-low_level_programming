#include "main.h"
#include <stdio.h>


/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	for (len--; len >= 0; len--)
	{
		putchar(s[len]);
	}
	putchar('\n');
}
