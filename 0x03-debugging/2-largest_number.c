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
		printf("%d is a largest number\n", a);
	}
	else if (b >= a && a >= c && b >= c)
	{
		printf("%d is a largest number\n", b);
	}
	else
	{
		printf("%d is a largest number\n", c);
	}

	return (largest);
}
