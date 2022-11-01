#include "main.h"
/**
  * _memset -fills memory with a constant byte
  *
  * @s: pointer to memory area to be filled
  * @b: the constant byte
  * @n: the number of bytes to fill
  *
  * Return: a pointer to memory area @s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
