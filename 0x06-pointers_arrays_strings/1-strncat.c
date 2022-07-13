#include "main.h"

/**
 * _strncat - concatenate 2 strings with n bytes from src
 * @dest: first string
 * @src: second string
 * @n: number of second string bytes
 * Return: return the concatenate string contain in dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = src[0]; i <= src[n]; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (d);
}
