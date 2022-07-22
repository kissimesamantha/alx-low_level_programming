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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
