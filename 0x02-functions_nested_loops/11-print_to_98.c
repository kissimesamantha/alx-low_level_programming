#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural number from n to 98
 * @n: entered number
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');

			}
			n++;

		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
			}
			else if (n == 98)
			{
				_putchar(n + '0');
			}
			n--;
		}
	}
	_putchar('\n');
}
