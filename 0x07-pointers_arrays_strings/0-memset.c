#include "main.h"

/**
 *_memset - function that fills memory with a constant byte
 *@n: first n byte
 *@b:constant byte
 *@s:variable pointer
 *Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
