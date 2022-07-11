#include <stdio.h>
#include <string.h>

/**
 * rev_string - check the code
 * @s: pointer char
 */

void rev_string(char *s)
{
	char *p1, *p2;


	for (p1 = s, p2 = s + strlen(s) - 1; p2 > p1; ++p1, --p2)
	{
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	printf("%s", s);
}
