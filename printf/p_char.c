#include "main.h"

/**
  * _char - prints a character passed to it.
  * @arg_list: the passed character.
  *
  * Return: 1
  */

int _char(va_list arg_list)
{
	int tmp;
	
	tmp = va_arg(arg_list, int);
	_putchar(tmp);

	return (1);
}
