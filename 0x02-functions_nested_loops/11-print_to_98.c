#include "main.h"
/**
 * print_to_98 - Print to 98 from every dxn
 * @n: number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
	}
	if (n == 98)
		_putchar(n);
}
