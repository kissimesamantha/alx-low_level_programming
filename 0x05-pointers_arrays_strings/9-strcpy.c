#include "main.h"

/**
 *  _strcpy - copies the string pointed to by src + '\0', to the buffer (dest)
 * @src: a stringwhich will be copied
 * @dest: pointer to the destination array where the content is to be copied
 * @*dest: pointer variable of dest
 * @*src: pointer variable of  src
 * Return:a pointer contain dest in a variable 'n'
 */
char *_strcpy(char *dest, char *src)
{
	char *n = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (n);
}
