#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - check the code
 * @str: pointer char
 */

void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i+=2)
        	_putchar(str[i]);

	_putchar('\n');
}
