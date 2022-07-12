#include "main.h"

/**
 *_puts - function that prints a string, followed by a new line, to stdout
 *@*str: pointer variable of string
 *@str: address of string
 *return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
