#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, multiple, product;

	for (i = 0; i <= 9; i++)
	{
		putchar('0');

		for (multiple = 1; multiple <= 9; multiple++)
		{
			putchar(',');
			putchar(' ');

			product = i * multiple;

			if (product <= 9)
			{
				putchar(' ');
			}
			else
			{
				putchar((product / 10) + '0');
			}

			putchar((product % 10) + '0');
		}
		putchar('\n');
	}
}
