#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Size is not grandeur, and territory does not make a nation'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intT;
	float floatT;
	long int longIntT;
	char charT;
	long long int longLongIntT;

	printf("Size of a char: %zu byte(s)\n", sizeof(charT));
	printf("Size of an int: %zu byte(s)\n", sizeof(intT));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntT));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntT));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatT));
	return (0);
}
