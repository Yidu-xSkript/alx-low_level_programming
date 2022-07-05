#include <stdio.h>
/**
 * print_to_98 - Print to 98 from every dxn
 * @n: number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
	}
  printf("98\n");
}
