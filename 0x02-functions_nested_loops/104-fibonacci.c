#include <stdio.h>
/**
 * main - Entry Point
 * Description: Fibonacci
 * Return: Always 0.
 **/
int main(void)
{
	unsigned long int f1 = 0, f2 = 1;
	int i;
	unsigned long int next = f1 + f2;

	for (i = 1; i <= 98; ++i)
	{
		if (i < 98)
			printf("%" PRIu64 ", ", next);
		else
			printf("%" PRIu64 "\n", next);
		f1 = f2;
		f2 = next;
		next = f1 + f2;
	}
	return (0);
}
