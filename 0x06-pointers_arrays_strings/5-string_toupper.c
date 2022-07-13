#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - check the code
 * @c: an array of integers
 * Return: converted char to uppercase
 */

char *string_toupper(char *c)
{
	int i = 0;
    
	while (c[i]) {
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}
	return (c);
}
