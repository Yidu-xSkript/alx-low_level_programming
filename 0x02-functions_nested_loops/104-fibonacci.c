#include <stdio.h>
#include "main.h"
typedef unsigned char byte;
#define N 300;

/**
 * printbig - Entry Point
 * Description: Fibonacci
 * @a: Bignum
 **/

void printbig(Bignum a)
{
	int leading = 1;

	for (int i = 0; i < N; ++i)
	{
		if (a.digits[i])
		{
			leading = 0;
			printf("%c", a.digits[i] + '0');
		}
		else
		{
			if (!leading)
			{
				printf("0");
			}
		}
	}
	if (leading)
		printf("0");
	puts("");
}

/**
 * initbig - Entry Point
 * Description: Fibonacci
 * @x: int
 * Return: int a.
 **/

Bignum initbig(int x)
{
	Bignum a = {{0}};

	a.digits[N - 1] = x;
	return (a);
}

/**
 * addbig - Entry Point
 * Description: Fibonacci
 * @a: Bignum
 * @b: Bignum
 * Return: Bignum c.
 **/

Bignum addbig(Bignum a, Bignum b)
{
	Bignum c;
	int sum, carry = 0;

	for (int i = N - 1; i >= 0; --i)
	{
		sum = a.digits[i] + b.digits[i] + carry;

		if (sum <= 9)
		{
			c.digits[i] = sum;
			carry = 0;
		}
		else
		{
			c.digits[i] = sum - 10;
			carry = 1;
		}
	}
	return (c);
}

/**
 * main - Entry Point
 * Description: Fibonacci
 * Return: Always 0.
 **/

int main(void)
{
	Bignum f1 = 0, f2 = 1;
	int i;
	Bignum next = addbig(f1, f2);

	for (i = 1; i <= 98; ++i)
	{
		if (i < 98)
			printbig("%d, ", next);

		f1 = f2;
		f2 = next;
		next = f1 + f2;
	}
	return (0);
}
