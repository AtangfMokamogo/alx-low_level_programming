#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: string.
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str++);
	}
	putchar('\n');
}
