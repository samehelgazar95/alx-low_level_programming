#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59
 *
 * Return: 24 hrs and 60 mins
*/

void jack_bauer(void)
{
	int hr = 0, min;

	while (hr <= 23)
	{
		min = 0;

		while (min <= 59)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
