#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int i = 0;
	int j;
	int v;

	while (i <= 9)
	{
		_putchar(i);
		j = 0;

		while (j <= 9)
		{
			v = i * j;
			_putchar(v + '0');
			_putchar(',');
			j++;

		}
		_putchar('\n');
		i++;

	}

}
