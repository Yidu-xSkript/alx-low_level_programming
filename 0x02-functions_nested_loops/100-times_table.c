#include <stdio.h>
/**
* print_times_table - prints times table
* Description: Prints times table
* @n: int input
**/
void print_times_table(int n)
{
	int x, y, z;

	if (n < 15 && n > 0)
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y != 0)
					printf(",");
				if (y == 0)
					printf("0");
				else if (z >= 10)
					printf("%3d%d", (z / 10), (z % 10));
				else if ((z < 10) && (y != 0))
					printf("%4d", (z % 10));
			}
			printf("\n");
		}
}
