#include "main.h"

/**
  * _printf - prints formatted string to console output
  * @format: the format string composed of 0 or more specifiers
  *
  * Return: the number of characters printed excluding the terminating null character
  */
int _printf(const char *format, ...)
{
	va_list f_args;
	int str_size;

	if (format == NULL)
		return (-1);

	str_size = _strlen(format);

	if (str_size <= 0)
		return (0);

	va_start(f_args, format);

	str_size = handler(format, f_args);

	_putchar(-1);
	va_end(f_args);

	return (str_size);
}
