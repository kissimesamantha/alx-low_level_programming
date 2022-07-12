#include "main.h"

/**
 * _strcpy - copies the string pointed to by src + '\0', to the buffer (dest)
 * @src: a stringwhich will be copied
 * @dest: pointer to the destination array where the content is to be copied
 * @*dest: pointer variable of dest
 * @*src: pointer variable of  src
 * return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] <= '\0'; i++)
		dest = src[i];
	return (dest);
}
