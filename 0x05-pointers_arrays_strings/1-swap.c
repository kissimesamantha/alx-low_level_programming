#include "main.h"

/**
 * swap_int -swaps the values of two integers
 * @*a: pointer variable of first integer
 * @a: value of address of the first integer
 * @*b: pointer variable of second integer
 * @b: value of address of the second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int x, y, z;

	x = 98;
	y = 42;

	z = x;
	x = y;
	y = z;
	*a = x;
	*b = y;

}
