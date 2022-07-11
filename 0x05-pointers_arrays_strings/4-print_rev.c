#include <stdio.h>
#include "main.h"

/**
 * print_rev - check the code
 * @s: pointer char
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0') {
		++length;
		++s;
	}

	for (i = length; i >= 0; --i) {
		_putchar(*(s));
		--s;
	}
	_putchar('\n');
}
