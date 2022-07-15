#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of character '_'
 * return: nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
		else
		{
			_putchar('\n');
		}
	}
}

