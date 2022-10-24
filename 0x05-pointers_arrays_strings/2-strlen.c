#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: the string to compute length of.
 *
 * Return: the length of the string @s
 */
int _strlen(char *s)
{
	int strSize = 0;

	while (*s++)
		strSize++;

	return (strSize);
}
