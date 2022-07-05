#include <stdio.h>
/**
 * main - Entry Point
 * Description: Fibonacci
 * Return: Always 0.
 **/
int main(void)
{
	int f1 = 0, f2 = 1, i, next;

	for (i = 1; i <= 50; i++)
	{
		if (i <= 1)
			next = i;
		else
		{
			next = f1 + f2;
			f1 = f2;
			f2 = next;
		}
		printf("%d, ", next);
	}
	return (0);
}
