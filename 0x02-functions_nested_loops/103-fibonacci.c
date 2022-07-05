#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Description: Fibonacci
 * Return: Always 0.
 **/
int main(void)
{
	int i = 2;
	printf("%d", sum(i));
	return (0);
}

/**
 * sum - Sum function
 * Description: Fibonacci
 * @n: int input
 * Return: int sum.
 **/
int sum(int n) {
	int sum = 0;
	while (fib(n) < 4000000)
	{
		if (fib(n)%2==0)
			sum += fib(n);
		n++;
	}
	return sum;
}

/**
 * fib - Fib function
 * Description: Fibonacci
 * @n: int input
 * Return: int c.
 **/
int fib(int n) {
	int a = 0;
	int b = 1;
	int c = 0;
	int i = 1;

	while (i <= n)
	{
		c = a + b;
		a = b;
		b = c;
		i++;
	}
	return c;
}
