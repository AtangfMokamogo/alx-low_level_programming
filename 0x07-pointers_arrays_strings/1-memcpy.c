#include "main.h"
/**
  * _memcpy - copies memory area.
  *
  * @dest: where we will copy to
  * @n: the number of bytes
  * @src: the memory are to copy from
  *
  * Return: a pointer to @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
