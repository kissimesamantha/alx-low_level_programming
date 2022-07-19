#include "main.h"

/**
 *_strchr - function that locate a character in a string
 *@s:string to check
 *@c: character to locate
 *Return: pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	while (s[i] !=  '\0')
	{
		if (c == s[i])
		{
			p = &s[i];
			return (p);
		}
		i++;
	}

	return ('\0');
}
