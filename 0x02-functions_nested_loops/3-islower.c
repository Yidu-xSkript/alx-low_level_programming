#include <ctype.h>
/**
 * _islower - Lower Alphabet
 *
 * Description: isLower
 *
 * @c: letter
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
