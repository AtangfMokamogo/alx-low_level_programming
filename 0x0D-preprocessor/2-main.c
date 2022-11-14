#include <stdio.h>

/**
  * main - Prints the name of the file that the program was compiled from
  *
  * Return: 0 (success)
  */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
