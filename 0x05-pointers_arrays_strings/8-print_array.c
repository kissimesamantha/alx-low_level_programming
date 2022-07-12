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
	int i = 0;

	while (i < n)
	{
		_putchar((a[i]) + 'o');
		i++;
	}

	_putchar('\n');
}
