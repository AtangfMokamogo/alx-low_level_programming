#include <stdio.h>

/**
 * main - Prints the alphabet in both uppercase and lowercase
 *
 * Return: 0 (Execution Successful)
 */
int main(void)
{
	char alpha_Str[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x < 52; x++)
	{
		putchar(alpha_Str[x]);
	}
	putchar('\n');
	return (0);
}
