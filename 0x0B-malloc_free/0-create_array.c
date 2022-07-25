#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array
 * @size: size - int
 * @c: c - char
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(char) * size);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
