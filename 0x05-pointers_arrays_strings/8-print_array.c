#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @*a: pointer variable
 * @a: address of a variable a
 * @n:nubers of array elements
 * return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);

		if (a[i] < 0)
		{
			_putchar(a[i]);
		}
		else if (a[i] > 0)
		{
			_putchar(a[i]);
		}

	}

	_putchar('\n');
}
