#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - will print the letters of the alphabet in lowercase.
 *
 * Return : 0 successful
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
