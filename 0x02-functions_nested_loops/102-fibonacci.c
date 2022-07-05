#include <stdio.h>
/**
 * main - Entry Point
 * Description: Fibonacci
 * Return: Always 0.
 **/
int main(void)
{
	int f1 = 0, f2 = 1, i, next;

	for (i = 1; i < 50; i++)
	{
		printf("%d, ", f2);
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
  return (0);
}
