#include "main.h"

/**
 * print_triangle - function that prints triangle
 * @size : is the size of the triangle
 * return: nothing
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				for (c = 0; c < size; c++)
				{
					_putchar(35);
				}
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
