#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int BlockSize, index;

	if (size > 0)
	{
		for (BlockSize = 1; BlockSize <= size; BlockSize++)
		{
			for (index = size - BlockSize; index > 0; index--)
			{
				putchar(' ');
			}

			for (index = 0; index < BlockSize; index++)
			{
				putchar('#');
			}

			if (BlockSize == size)
			{
				continue;
			}

			putchar('\n');
		}
	}

	putchar('\n');
}
