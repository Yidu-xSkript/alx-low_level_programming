#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copy 2 strings
 * @dest:  char
 * @src: char
 * @n: int
 * Return: char*
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
