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

	/*printf("enter the three numbers:");*/
	/*scanf("%a %b %c", &a, &b, &c);*/

	if (a >= b && a >= c && b >= c)
	{
		largest = a;
	}
	else if (b >= a && a >= c && b >= c)
	{
		largest = b;
	}
	else if (a <= b && a <= c && b <= c)
	{
		largest = c;
	}

	else if (a == b && b == c && a == c)
	{
		largest = a;
	}

	return (largest);
}
