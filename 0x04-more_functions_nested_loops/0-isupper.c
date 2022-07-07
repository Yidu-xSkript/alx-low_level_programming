#include <ctype.h>

/**
 * _isupper - Check uppercase values
 * description: Upper case values test
 * @c: int input
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
