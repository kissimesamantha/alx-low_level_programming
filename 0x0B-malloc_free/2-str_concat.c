#include "main.h"

/**
 * str_concat - function that concate two strings
 * @s1:first string
 * @s2: second string
 * Return: ponter to a new string concatanate
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, m, n;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	m = i + j;
	s = (char *)malloc(m * sizeof(char) + 1);
	n = 0;
	while (n < m)
	{
		if (n < i)
			s[n] = s1[n];
		if (n >= i)
		{
			s[n] = s2[j];
			j++;
		}
		n++;
	}
	s[n] = '\0';
	return (s);
}
