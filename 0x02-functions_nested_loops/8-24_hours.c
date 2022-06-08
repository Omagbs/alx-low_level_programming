#include "main.h"

/**
* jack_bauer - print every minute of the day
* Description: print minutes 00:00 to 23:29
* Return: Nothing.
*/

void jack_bauer(void)
{
	int hour = 0;

	int min;

	while (hour <= 24)
	{
		min = 0;

		while (min <= 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar ('\n');
			min++;
		}
		hour++;
	}
}
