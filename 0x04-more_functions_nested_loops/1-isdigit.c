#include "main.h"
/**
 * _isdigit - Checks if a number is a digit
 * @c : the digit to be checked
 *
 * Return: 1 if is a digit and 0 if its not a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
