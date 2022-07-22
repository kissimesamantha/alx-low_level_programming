#include "main.h"
#include <stddef.h>

/**
 *_strchr - function that locate a character in a string
 *@s:string to check
 *@c: character to locate
 *Return: pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0;  s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
	}
	return ('\0');
}
