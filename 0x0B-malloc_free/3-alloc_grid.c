#include "main.h"

/**
 * alloc_grid - allocating second array
 * @width:wdth of an array
 * @height:height of an array
 * Return: a pointer ta a allocated grid
 */

int **alloc_grid(int width, int height)
{
	int i, j, n, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height *  sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = i ; j > 0; j--)
			{
				free(a[j]);
				/*free(a);*/
				/*return (NULL);*/
			}
		}
	}
	for (n = 0; n < height; n++)
	{
		for (l = 0; l < width; l++)
			a[n][l] = 0;
	}
	return (a);
}
