#include "main.h"

/**
 * print_most_numbers - Print most numbers
 * Description: Print numbers from 1 to 10 except 2 & 4
 */

void print_most_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++)
        if (i != 2 && i != 4)
            _putchar((i % 10) + '0');

    _putchar('\n');
}