#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * Return: 1 if is positive, 0 if is zero and -1 if is negative
 *
 * @n: n is a number
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);

	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
