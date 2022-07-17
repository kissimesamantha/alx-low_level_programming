#include "main.h"

/**
 * print_triangle - function that prints triangle
 * @size : is the size of the triangle
 * return: nothing
 */

void print_triangle(int size)
{
	int a = 1, b;

	if (size > 0)
	for (a = 1; a <= size; a++)
	{
		for (b = 0; b < size - 1; b++)
		{
		_putchar(' ');
		}
		for (b = 0; b < a; b++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
