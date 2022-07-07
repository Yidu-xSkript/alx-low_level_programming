#include "main.h"

/**
 * more_numbers - Print more numbers
 * Description: Print numbers from 0 to 14 - 10x
 */

void more_numbers(void)
{
    int i = 0, j;

    while (i < 10)
    {
        for (j = 0; j < 15; j++)
        {
            if (j >=10)
                _putchar((j / 10) + '0');

            _putchar((j % 10) + '0');
        }
        _putchar('\n');
        i++;
    }  
}