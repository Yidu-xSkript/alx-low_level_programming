#include "main.h"

/**
 * print_diagonal - Print backslash diagonally
 * Description: Print backslash diagonally based on n.
 * @n: int input
 */

void print_diagonal(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
            _putchar(' ');
        
        _putchar('\\');

        if (i == n - 1)
            continue;

        _putchar('\n');
    }
    _putchar('\n');
}