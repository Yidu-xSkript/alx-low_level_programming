#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenate 2 strings
 * @dest:  char
 * @src: char
 * @n: int
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
