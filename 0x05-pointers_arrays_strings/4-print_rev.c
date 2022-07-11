#include <stdio.h>
#include "main.h"

/**
 * print_rev - check the code
 * @s: pointer char
 */

void print_rev(char *s)
{
	int size, value;

	size = 0;
	for (value = 0; s[value] != 0; value++)
	{
		size++;
	}
	for (value = size - 1; value >= 0; value--)
	{
		_putchar(s[value]);
	}
	/* 10 is ASCII value for \n */
	_putchar(10);
}
