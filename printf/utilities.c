#include "main.h"

/**
  * _print - prints the string @str passed to it.
  * @str: string to be printed.
  *
  * Return: The length of the string.
  */
int _print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);
	return (i);
}


/**
  * _strlen - computes the length of the string @str
  * @str: string to calculate the length of.
  *
  * Return: the length of the string.
  */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++) {;}
	 return (i);
}
