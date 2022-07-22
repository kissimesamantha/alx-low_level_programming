#include "main.h"

/**
 *print_rev - function that prints a string, in reverse
 *@*s:pointer variable of string
 *@s: address of a string variable
 *return: nothing
 */

void print_rev(char *s)
{
	int l1, l2, i;
	char  tmp;

	l1 = 0;
	l2 = 0;
	while (s[l1] != '\0')
		l1++;
	l2 = l1 - 1;
	for (i = 0; i < l1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l2];
		s[l2] = tmp;
		l2 -= 1;
	}
	_putchar(s[l2]);
}
