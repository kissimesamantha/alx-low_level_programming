#include "main.h"

/**
 *_memcpy - function that copy memory area
 *@src:pointer variable of source
 *@dest:pointer variable of destination
 *@n:number of bytes
 *Return: return a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);

}
