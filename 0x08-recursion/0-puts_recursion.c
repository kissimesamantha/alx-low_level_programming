#include "main.h"

/**
 *_puts_recursion - function that print a string
 *@s: string
 *Return:nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	return;
	_putchar(*s);
	_puts_recursion(*s + 1);
}
