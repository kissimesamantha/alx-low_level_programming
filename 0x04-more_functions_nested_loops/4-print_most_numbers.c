#include "main.h"

/**
 * print_most_numbers - functions that print numbers except 2 and 4
 * return: norhing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
