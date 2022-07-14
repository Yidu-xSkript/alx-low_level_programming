#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - Encodes a string using rot13.
 * @c: The string to be encoded.
 * Return: A pointer to the encoded string.
 */

char *rot13(char *c)
{
	char* result;
	char* current_char;

	result = malloc(strlen(c));
    
	strcpy(result, c);
	current_char = result;

	while (*current_char != '\0')
	{
		if ((*current_char >= 97 && *current_char <= 122) || (*current_char >= 65 && *current_char <= 90))
		{
			if (*current_char > 109 || (*current_char > 77 && *current_char < 91))
				*current_char -= 13;
			else
				*current_char += 13;
		}
		current_char++;
	}

	return result;
}
