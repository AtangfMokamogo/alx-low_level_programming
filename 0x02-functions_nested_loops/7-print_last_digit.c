#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
	{
		digit *= -1;
	}
	putchar(digit + '0');

	return (digit);
}
