#include "main.h"

/**
 * print_triangle - function that prints triangle
 * @size : is the size of the triangle
 * return: nothing
 */

void print_triangle(int size)
{
	int a = 1, b;

	while (a <= size && size > 0)
	{
		b = 0;
		while (b < size - 1)
		{
		_putchar(' ');
		b++;
		}
		b = 0;
		while (b < a)
		{
		_putchar('#');
		b++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 1)

		_putchar('\n');

}
