#include "main.h"

/**
 * print_line - Print lines
 * Description: Print lines based on n.
 * @n: int input
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
