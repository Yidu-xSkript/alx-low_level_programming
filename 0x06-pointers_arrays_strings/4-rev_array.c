#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n:  the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int j, i = n - 1;
	
	while (i >= n / 2)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
		i--;
	}
}

