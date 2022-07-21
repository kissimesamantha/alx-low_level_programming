#include "main.h"

/**
 * _pow_recursion - function that returns power of number
 * @x:number to raised
 * @y:power
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	_pow_recursion(x, y);
	return (x);
}
