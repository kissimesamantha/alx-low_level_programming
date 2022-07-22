#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest:variable that contains final string
 * @src: variable that contain a first string to concatenate
 * Return:Return the concatenate string contain in variable dest
 */

char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (d);
}
