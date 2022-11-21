#include "main.h"

/**
  * _putchar - writes the character passed to it to stdout
  * @my_char: The character to print
  *
  * Return: 1 if successful. -1 if any error occurs.
  */

int _putchar(char my_char)
{
	return (buffer(my_char));
}

int buffer(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffer, i);
		i = 0;
	}

	if (c != -1)
		buffer[i++] = c;

	return (1);
}
