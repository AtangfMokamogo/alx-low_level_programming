#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'x' && c <= 'y') ||
	    (c >= 'X' && c <= 'Y'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
