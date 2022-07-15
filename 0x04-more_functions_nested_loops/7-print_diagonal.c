#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of character '\'
 * return: nothing
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(47);
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
