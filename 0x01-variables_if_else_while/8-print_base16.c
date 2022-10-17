#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 - succcess
 */
int main(void)
{
	int val;
	char alphs;

	for (val = 0; val < 10; val++)
		putchar((val % 10) + '0');

	for (alphs = 'a'; alphs <= 'f'; alphs++)
		putchar(alphs);

	putchar('\n');

	return (0);
}
