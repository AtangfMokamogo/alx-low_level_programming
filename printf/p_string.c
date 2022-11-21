#include "main.h"

/**
  * _string - prints a string
  * @arg_list - the string variable to print.
  *
  * Return: the lenght of the string to print.
  */

int _string(va_list arg_list)
{
	char *c;
	int c_len;

	c = va_arg(arg_list, char *);
	c_len = _print((c != NULL) ? c : "(null)");

	return (c_len);
}
