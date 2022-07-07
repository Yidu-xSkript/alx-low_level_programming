#include "main.h"

/**
 * print_square - Print square
 * description: Print square based on size.
 * @size: int input
 */

void print_square(int size)
{
	int i, j = 0;

	while (j <= size)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
        
		if (i == size - 1)
			continue;

		_putchar('\n');
		j++;
	}
}
