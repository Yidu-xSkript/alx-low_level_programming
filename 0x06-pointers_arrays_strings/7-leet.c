#include <stdio.h>

/**
 * leet - check the code
 * @c: string
 * Return: replace certain characters
 */

char *leet(char *c)
{
	size_t i = 0, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (c[i])
	{
		for (j = 0; j <= sizeof(leet) - 1; j++)
		{
			if (c[i] == leet[j] || c[i] - 32 == leet[j])
				c[i] = j + '0';
		}
		i++;
	}

	return (c);
}
