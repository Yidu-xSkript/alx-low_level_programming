#include <stdio.h>
/**
 * main - Entry Point
 * Description: Fibonacci
 * Return: Always 0.
 **/
int main(void)
{
	int f1 = 0, f2 = 1, i;
	int next = f1 + f2;

	for (i = 3; i <= 50; ++i)
	{
		printf("%d, ", next);
		f1 = f2;
		f2 = next;
		next = f1 + f2;
	}
	return (0);
}
