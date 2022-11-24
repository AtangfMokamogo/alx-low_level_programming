#include "lists.h"

/**
 * list_len - function that returns the elements of a list
 * @h: pointer to constat list_t
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
