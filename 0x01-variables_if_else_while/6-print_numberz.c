#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only alowed functions are putchar
 *
 * Return: Always 0 success.
 */
int main(void)
{
	int val;

	for (val = 0; val < 10; val++)
		putchar((val % 10) + '0');

	putchar('\n');

	return (0);
}
