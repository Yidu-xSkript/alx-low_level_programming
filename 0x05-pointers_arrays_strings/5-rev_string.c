#include <stdio.h>
#include <string.h>

/**
 * rev_string - check the code
 * @s: pointer char
 */

void rev_string(char *s)
{
	size_t i, j;
	char holder;

	j = strlen(s) - 1;

	for (i = 0; i < (strlen(s) / 2); i++)
	{
		holder = s[i];
		s[i] = s[j];
		s[j] = holder;
		j--;
	}
}
