#include "main.h"

/**
 * print_square - function that prints a square
 * @size: size of square
 * return:nothing
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a < size; a++)
		{
			for (b = 1; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
