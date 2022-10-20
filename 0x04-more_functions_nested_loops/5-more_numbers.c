#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints the numbers 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int x, xIterate;

	for (xIterate = 0; xIterate <= 9; xIterate++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				putchar((x / 10) + '0');
			}
			putchar((x % 10) + '0');
		}
		putchar('\n');
	}
}
