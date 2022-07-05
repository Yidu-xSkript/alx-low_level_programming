#include "main.h"
/**
 * print_last_digit - Print the last digit
 * Description: Print the last digit
 * @j: number | integer
 * Return: int (Success)
 */

int print_last_digit(int j)
{
	j = j % 10;
	if (j < 0)
		j = -j;
   	 _putchar(j + '0');
	return (j);
}
