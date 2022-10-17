#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0 to 99
 * Return: 0 - success
*/
int main(void)
{
	int val_1, val_2;

	for (val_1 = 0; val_1 <= 98; val_1++)
	{
		for (val_2 = val_1 + 1; val_2 <= 99; val_2++)
		{
			putchar((val_1 / 10) + '0');
			putchar((val_1 % 10) + '0');
			putchar(' ');
			putchar((val_2 / 10) + '0');
			putchar((val_2 % 10) + '0');

			if (val_1 == 98 && val_2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
