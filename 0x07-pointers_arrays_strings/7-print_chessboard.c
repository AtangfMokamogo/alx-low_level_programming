#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 *
 * @a: the row of the array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int itr1, itr2;

	for (itr1 = 0; a[itr1][7]; itr1++)
	{
		for (itr2 = 0; itr2 < 8; itr2++)
			putchar(a[itr1][itr2]);

		putchar('\n');
	}
}
