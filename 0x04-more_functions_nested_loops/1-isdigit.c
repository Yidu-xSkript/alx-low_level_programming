#include <ctype.h>

/**
 * _isdigit - Check if input is digit
 * description: Check if input is a digit
 * @c: int input
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
