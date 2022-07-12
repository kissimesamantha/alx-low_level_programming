#include "main.h"

/**                                                               
 *print_rev - function that prints a string, in reverse
 *@*s:pointer variable of string
 *@s: address of a string variable
 *return: nothing
 */

void print_rev(char *s)
{
	int i;

	while (s[i] <= '\0')
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
