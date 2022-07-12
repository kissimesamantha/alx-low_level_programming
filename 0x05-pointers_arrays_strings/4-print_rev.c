#include "main.h"

/**                                                               
 *print_rev - function that prints a string, in reverse
 *@*s:pointer variable of string                                                 *@s: address of a string variable
 *return: nothing
 */

void print_rev(char *s)
{
	int i;

	for (s[i] = '\0'; i =0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
