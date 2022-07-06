#include "main.h"

/**
*print_last_digit - print the last digit of a number
*
*@n: integer entered
*Return: Always x (success)
*/
int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
	{
		x = (-1 * x);
	}

	_putchar(x + '0');

	return (x);

}
