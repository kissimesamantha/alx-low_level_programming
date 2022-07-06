#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int i = 9;
	int j;
	int val;

	for (j = 0; j <= 9; j++)
	{
		val = i * j;

		_putchar(val);

	}

	_putchar('\n');

}
