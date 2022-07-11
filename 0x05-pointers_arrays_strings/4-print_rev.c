#include <stdio.h>
#include <string.h>

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
		printf("%c", *(s));
		--s;
	}
}
