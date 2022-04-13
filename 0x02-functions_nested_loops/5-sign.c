#include "main.h"

/**
 * print_sign - Prints the sign of a number, 0
 * @n: function parameter of type int
 * Return: Always 0
 * returns 0 and prints 0 if n is zero
 * returns -1 and prints - if n is less than zero
 */
int print_sign(int n)

{
	int test;
	if (n > io)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
