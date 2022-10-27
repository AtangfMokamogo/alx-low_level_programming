#include "main.h"
/**
  * reverse_array - Reverses the content of an array of integers.
  * @a: The array of integers to be reversed.
  * @n: The number of elements in the array.
  */
void reverse_array(int *a, int n)
{
	int x, y, tmp;

	for (x = 0; x < n - 1; x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			tmp = *(a + y);
			*(a + y) = *(a + (y - 1));
			*(a + (y - 1)) = tmp;
		}
	}
}
