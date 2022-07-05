#include <stdio.h>
/**
 * main - Entry Point
 * Description: Fibonacci
 * Return: Always 0.
 **/
int main(void)
{
	int64_t f1 = 0, f2 = 1, i;
	int64_t next = f1 + f2;

	for (i = 1; i <= 98; ++i)
	{
		if (i < 98)
			printf("%jd, ", next);
		else
			printf("%jd\n", next);
		f1 = f2;
		f2 = next;
		next = f1 + f2;
	}
	return (0);
}