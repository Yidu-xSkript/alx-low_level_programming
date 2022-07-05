#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
		return (0);
	else
		return (1);
}
