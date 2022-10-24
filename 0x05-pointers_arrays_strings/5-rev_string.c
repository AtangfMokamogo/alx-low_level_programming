#include "main.h"
#include <stdio.h>

/**
 * rev_string - Prints a reversed a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int strlen = 0, index = 0;
	char tvar;

	while (s[index++])
	{
		strlen++;
	}

	for (index = strlen - 1; index >= strlen / 2; index--)
	{
		tvar = s[index];
		s[index] = s[strlen - index - 1];
		s[strlen - index - 1] = tvar;
	}
}
