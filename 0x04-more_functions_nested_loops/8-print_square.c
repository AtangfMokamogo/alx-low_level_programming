#include "main.h"
#include <stdio.h>
/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int length, breadth;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (breadth = 0; breadth < size; breadth++)
			{
				putchar('#');
			}

			if (length == size - 1)
			{
				continue;
			}
			putchar('\n');
		}
	}

	putchar('\n');
}
