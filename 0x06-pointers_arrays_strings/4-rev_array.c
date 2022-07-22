#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a:pointer variable of array
 * @n:number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, r;

	for (i = n - 1; i > n / 2; i--)
	{
		r = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = r;
	}
}
