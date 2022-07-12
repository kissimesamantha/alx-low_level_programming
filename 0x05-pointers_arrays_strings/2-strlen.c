#include "main.h"

/**
 *_strlen - function that returns the length of a string
 *@*s: pointer variable of a string
 *@s: address of a string
 *Return: lenght of string
 */

int _strlen(char *s)
{
	int i;

	while (*s[i] != '\0')
		i++;

	return (i);
}
