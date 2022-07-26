#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars.initializes with a specific char
 * @size:size of array to be created
 * @c: is the specific character
 * Return: pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
