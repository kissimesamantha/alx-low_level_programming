#include "main.h"

/**
*print_last_digit - print the last digit of a number
*
*@n: integer entered
*Return: Always 0 (success)
*/
int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x > 0)
	{
		_putchar(x);
	}
	else
		_putchar('0');

	return (0);

}
