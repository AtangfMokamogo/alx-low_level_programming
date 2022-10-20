#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints numbers 0 -9 but omits the numbers 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		else
		{
			putchar((num % 10) + '0');
		}
	}

	putchar('\n');
}
