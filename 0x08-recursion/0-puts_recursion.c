#include "main.h"

/**
 *_puts_recursion - function that print a string
 *@s: string
 *Return:nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] > '\0')
	{
		return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
