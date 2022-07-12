#include "main.h"
#include <string.h>

/**
 *print_rev - function that prints a string, in reverse
 *@*s:pointer variable of string
 *@s: address of a string variable
 *return: nothing
 */

void print_rev(char *s)
{
	int l, i;
	char *d, *f, tmp;
	
	d = s;
	f = s;
	l = strlen(s);

	for (i = 0; i < i - 1; i--)
		f++;
	for (i = 0; i != l / 2 ; i++)
	{
		tmp = *f;
		*f =  *d;
		*d = tmp;

		d++;
		f--;
	}

}
