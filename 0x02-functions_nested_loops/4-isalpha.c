#include <ctype.h>
/**
 * _isalpha - non-numerical
 *
 * Description: is alpha
 *
 * @c: letter
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
