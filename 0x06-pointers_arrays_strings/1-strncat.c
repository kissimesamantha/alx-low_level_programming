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
	int j, i;

	for (j = 0; dest[j] != '\0'; j++)

	for (i = 0; i <= n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}

	dest[j + i] = '\0';

	return (d);
}
