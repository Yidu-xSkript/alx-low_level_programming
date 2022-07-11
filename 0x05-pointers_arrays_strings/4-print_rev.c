#include <stdio.h>

/**
 * print_rev - check the code
 * @s: pointer char
 */

void print_rev(char *s)
{
	int len = 0, i;

	while (*s != '\0')
	{
		++len;
		++s;
	}

	for (i = len - 1; i >= -1; --i)
	{
		printf("%c", *s);
		--s;
	}

	printf("\n");
}
