#include <stdio.h>

/**
 * main - Program prints the alphabet in console
 *
 * Return: 0 Success
 */
int main(void)
{
	char alpha_string[26] = "abcdefghijklmnopqrstuvwxyz";
	int alpha_index;

	for (alpha_index = 0; alpha_index < 26; alpha_index++)
	{
		putchar(alpha_string[alpha_index]);
	}
	putchar('\n');
	return (0);
}
