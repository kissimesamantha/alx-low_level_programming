#include "main.h"

int _sqrt(int, int);

/**
 *_sqrt_recursion - natural square root of a number
 *@n: number
 *Return: square root of number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt - recursive square root
 *@n: number
 *@i: iterator
 *Return: a number;
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
