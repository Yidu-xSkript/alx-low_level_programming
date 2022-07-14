/**
 * string_toupper - check the code
 * @c: string
 * Return: converted char to uppercase
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i]) {
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}
	return (c);
}
