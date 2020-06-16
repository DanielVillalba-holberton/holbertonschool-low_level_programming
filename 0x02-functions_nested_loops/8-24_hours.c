#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day.
 */
void jack_bauer(void)
{
	int hour = 0;
	int hour1, hour2, min1, min2;

	while (hour < 24)
	{
	int min = 0;

		while (min < 60)
		{
			hour1 = hour / 10;
			_putchar(hour1 + '0');
			hour2 = (hour % 10);
			_putchar(hour2 + '0');
			_putchar(':');
			min1 = min / 10;
			_putchar(min1 + '0');
			min2 = (min % 10);
			_putchar(min2 + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
