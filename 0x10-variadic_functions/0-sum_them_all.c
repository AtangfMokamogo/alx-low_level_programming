#include <stdarg.h>

/**
  * sum_them_all- computes the sum of all arguments passed to it
  * @n: The number of arguments to sum.
  *
  * Return: If n == 0, return o else return computed sum.
  */

int sum_them_all(const unsigned int n, ...)
{
	/* Declare a pointer to arguments*/
	va_list pargs;

	unsigned int i, sum;

	/* Initialise the pointer to arguments*/
	va_start(pargs, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(pargs, int);
	va_end(pargs);

	return (sum);
}
