#include "main.h"

/**
 *_strchr - function that locate a character in a string
 *@s:string to check
 *@c: character to locate
 *Return: pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	int n = 0, i;

	while (s[n])
		n++;
	for (i = 0; i < n; i++)
	{
		if (c == s[i])
			s += i;
		return (s);
	}
	return ('\0');
}
