#include "main.h"
/**
  * leet - Encodes a string to 1337.
  * @str: The string to be encoded.
  *
  * Return: A pointer to the encoded string.
  */

char *leet(char *str)
{
	int iterator = 0, x;
	int low_chars[] = {97, 101, 111, 116, 108};
	int upr_chars[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(str + iterator) != '\0')
	{
		for (x = 0; x < 5; x++)
		{
			if (*(str + iterator) == low_chars[x] ||
					*(str + iterator) == upr_chars[x])
			{
				*(str + iterator) = nums[x];
				break;
			}
		}
		iterator++;
	}
	return (str);
}
