#include "main.h"

/**
  * handler - format string controller
  * @str: the format string
  * @arg_list: argument list
  *
  * Return: the size of the string.
  */
int handler(const char *str, va_list arg_list)
{
	int str_size, i, tmp;
	str_size = 0;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			tmp = mod_handler(str, arg_list, &i);
			if (tmp == -1)
				return (-1);
			str_size += tmp;
			continue;
		}

		_putchar(str[i]);
		str_size = str_size +1;
	}

	return (str_size);

}

/**
  * mod_handler - controls how to interpret the % symbol
  * @str: the format string
  * @arg_list: the list of arguments passed
  * @i: index of iteration
  *
  * Return: Size of the numbers of elements printed
  */
int mod_handler(const char *str, va_list arg_list, int *i)
{
	int size, j, format_size;
	format f_specifier[] = {
		{'s', _string}, {'c', _char}
	};

	*i = *i +1;

	if (str[*i] == '\0')
		return (-1);
	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	format_size = sizeof(f_specifier)/ sizeof(f_specifier[0]);
	for (size = j = 0; j < format_size; j++)
	{
		if (str[*i] == f_specifier[j].d_type)
		{
			size = f_specifier[j].f(arg_list);
			return (size);
		}
	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
