#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: counter of arguments
 * @av: vector of arguments
 *
 * Return: pointer to a new string, or NULL if it fails. Returns NULL
 * if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	char *itr;
	int v;
	int u;
	int w = 0;
	int n;
	int m;
	int counter = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (v = 0; v < ac; v++)
	{
		for (u = 0; av[v][u] != '\0'; u++)
			counter++;

		counter++;
	}
	counter++; /* to account for \n that needs to be added later */
       itr = malloc(sizeof(char) * counter);
	if (itr == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			itr[w] = av[n][m];
			w++;
		}
		itr[w] = '\n';
		w++;
	}
	itr[w] = '\0';
	return (itr);
}
