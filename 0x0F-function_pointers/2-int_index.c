#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp:pointers to a function
 * Return: the first element of array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
	if (array &&  cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
			res = i;
			break;
			}
			if ((cmp(array[i]) == (-1)))
			{
			return (res);
			}
		}
	}
	return (res);
}
