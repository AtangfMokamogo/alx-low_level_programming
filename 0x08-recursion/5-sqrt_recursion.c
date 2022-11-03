#include "main.h"
/**
 * sqrt_finder - Finds the square root of two numbers
 *
 * @itr: The number to find the square root of
 * @sqr: The number to test for the square root of @itr
 *
 * Return: Square root if@itr has a defined
 *         natural square root else -1
 */

int sqrt_finder(int itr, int sqr)
{
	if (sqr * sqr > itr)
		return (-1);

	else if (sqr * sqr == itr)
		return (sqr);

	else
		return (sqrt_finder(itr, sqr + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to return the square root of
 *
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_finder(n, 1));
}
