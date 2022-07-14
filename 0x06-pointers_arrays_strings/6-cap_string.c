#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * cap_string - check the code
 * @c: string
 * Return: capitalize first words
 */

char *cap_string(char *c)
{
	size_t i;

	for (i = 0; i < strlen(c); i++)
		if ((isalpha(c[i]) && c[i - 1] == ' ') ||
			(isalpha(c[i]) && c[i - 1] == '\t') ||
			(isalpha(c[i]) && c[i - 1] == '\n') ||
			(isalpha(c[i]) && c[i - 1] == ',') ||
			(isalpha(c[i]) && c[i - 1] == ';') ||
			(isalpha(c[i]) && c[i - 1] == '.') ||
			(isalpha(c[i]) && c[i - 1] == '!') ||
			(isalpha(c[i]) && c[i - 1] == '?') ||
			(isalpha(c[i]) && c[i - 1] == '"') ||
			(isalpha(c[i]) && c[i - 1] == '(') ||
			(isalpha(c[i]) && c[i - 1] == ')') ||
			(isalpha(c[i]) && c[i - 1] == '{') ||
			(isalpha(c[i]) && c[i - 1] == '}') ||
			i == 0)
			c[i] = toupper(c[i]);

	return (c);
}
