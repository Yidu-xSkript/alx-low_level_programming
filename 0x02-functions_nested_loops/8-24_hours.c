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
			_putchar(hours);
			_putchar(minutes);
			minutes++;
		}
		hours++;
		minutes = 0;
	}
}
