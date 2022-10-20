#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	for (int niterate = 0; niterate <= 9; niterate++)
	{
		putchar(niterate);
	}
	putchar('\n');
}
