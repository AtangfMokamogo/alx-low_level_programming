#include "main.h"
/**
  * string_toupper - Changes all lowercase letters
  *                  of a string to uppercase.
  * @str: The string to be changed.
  *
  * Return: A pointer to the changed string.
  */

char *string_toupper(char *str)
{
	int index = 0;

	while (*(str + index) != '\0')
	{
		if ((*(str + index) >= 97) && (*(str + index) <= 122))
			*(str + index) = *(str + index) - 32;
		index++;
	}

	return (str);
}
