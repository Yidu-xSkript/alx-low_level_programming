#include <string.h>
#include <stdio.h>

/**
 * puts2 - check the code
 * @str: pointer char
 */

void puts2(char *str)
{
	size_t i;
	char s[32] = "";

	for (i = 0; i < strlen(str); i+=2)
        	s[i / 2] = str[i];

	printf("%s\n", s);
}
