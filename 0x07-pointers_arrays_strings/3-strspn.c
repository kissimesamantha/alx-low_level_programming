#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s:initial string
 * @accept: final string
 * Return:number of bytes of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
			if (*(accept + j) == '\0')
				break;
	}
	return (i);
}
