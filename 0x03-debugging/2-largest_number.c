#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largest = a;
		printf("\n the largest is %d\n", a);
	}
	else if (b >= a && a >= c)
	{
		largest = b;
		printf("\n the largest is %d\n", b);
	}
	else
	{
		largest = c;
		printf("\n the largest is %d\n", c);
	}

	return (largest);
}
