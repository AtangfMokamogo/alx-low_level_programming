#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index_1 = 0, index_2 = 0;

	while (*(dest + index_1) != '\0')
	{
		index_1++;
	}

	while (index_2 < n)
	{
		*(dest + index_1) = *(src + index_2);
		if (*(src + index_2) == '\0')
			break;
		index_1++;
		index_2++;
	}
	return (dest);
}
