#include "main.h"
/**
 * natural_nums - Entry point
 * Description: Print natural nums
 **/
void natural_nums(void)
{
	int sum = 0;
	int i;

	for (int i = 0; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	_putchar(sum);
}
