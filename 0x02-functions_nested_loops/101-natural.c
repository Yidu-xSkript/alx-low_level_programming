#include "main.h"
/**
 * main - Entry point
 * Description: Print natural nums
 **/
void main(void)
{
	int sum = 0;
	int i;

	for (int i = 0; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	_putchar(sum);
}
