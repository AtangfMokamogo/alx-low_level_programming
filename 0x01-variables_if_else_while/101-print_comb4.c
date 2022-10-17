#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: 0 -Success
 */
int main(void)
{
	int val_1, val_2, val_3;

	for (val_1 = 0; val_1 < 8; val_1++)
	{
		for (val_2 = val_1 + 1; val_2 < 9; val_2++)
		{
			for (val_3 = val_2 + 1; val_3 < 10; val_3++)
			{
				putchar((val_1 % 10) + '0');
				putchar((val_2 % 10) + '0');
				putchar((val_3 % 10) + '0');

				if (val_1 == 7 && val_2 == 8 && val_3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
