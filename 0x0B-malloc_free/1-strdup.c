#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: The string to copy
 *
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */

char *_strdup(char *str)
{
	char *itr;
	unsigned int x = 0;
	unsigned int y = 0;

	if (str == NULL)
		return (NULL);

	while (str[x])
		x++;

       itr = malloc(sizeof(char) * (x + 1));

	if (itr == NULL)
		return (NULL);

	while (str[y])
	{
		ar[y] = str[y];
		y++;
	}

	itr[y + 1] = 0;
	return (itr);
}
