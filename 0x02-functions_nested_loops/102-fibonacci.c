#include <stdio.h>
/**
 * main - Entry Point
 * Description: Fibonacci
 * Return: Always 0.
 **/
int main(void)
{
	long f1 = 0, f2 = 1, i;
	long next = f1 + f2;

	for (i = 1; i <= 50; ++i)
	{
		if (i < 50)
			printf("%ld, ", next);
		else
			printf("%ld", next);
		f1 = f2;
		f2 = next;
		next = f1 + f2;
	}
	return (0);
}
