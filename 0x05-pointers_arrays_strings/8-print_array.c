#include <stdio.h>

/**
 * print_array - check the code
 * @a: pointer int
 * @n: int
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (n - 1 != i) printf(", ");
	}
	printf("\n");
}
