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

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src <= src[n])
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (d);
}
