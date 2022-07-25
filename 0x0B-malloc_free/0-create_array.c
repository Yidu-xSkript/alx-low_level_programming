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

	ch = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}

	if (ch == 0)
		return (NULL);

	return ch;
}
