#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int nIterate = 0;
	char alphas;

	for (nIterate = 0; nIterate <= 9; nIterate++)
	{
		for (alphas = 'a'; alphas <= 'z'; alphas++)
			putchar(alphas);
	
	}
	putchar('\n');
}
