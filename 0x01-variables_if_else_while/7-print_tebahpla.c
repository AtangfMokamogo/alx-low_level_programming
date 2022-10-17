#include <stdio.h>

/**
 * main - Prints the alphabet in reverse.
 *
 * Return: 0 -Success
 */
int main(void)
{
	char alphs;

	for (alphs = 'z'; alphs >= 'a'; alphs--)
		putchar(alphs);

	putchar('\n');

	return (0);
}
