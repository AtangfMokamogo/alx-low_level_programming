#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			putchar((hours / 10) + '0');
			putchar((hours % 10) + '0');
			putchar(':');
			putchar((minutes / 10) + '0');
			putchar((minutes % 10) + '0');
			putchar('\n');
		}
	}
}
