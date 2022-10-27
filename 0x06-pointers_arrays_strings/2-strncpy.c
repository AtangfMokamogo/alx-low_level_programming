#include "main.h"
/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int iterator = 0, len_src = 0;

	while (src[iterator++])
		len_src++;

	for (iterator = 0; src[iterator] && iterator < n; iterator++)
		dest[iterator] = src[iterator];

	for (index = len_src; iterator < n; iterator++)
		dest[iterator] = '\0';

	return (dest);
}
