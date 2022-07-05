#include "main.h"
/**
 * jack_bauer - Print Timel
 * Description: Prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
			minutes++;
		}
		hours++;
		minutes = 0;
	}
}
