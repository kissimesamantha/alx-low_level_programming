#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int i = 0;
	int j;
	int val;

	while (i <= 9)
	{
		_putchar(i);
		j = 0;

		while (j <= 9)
		{
			val = i * j;
			_putchar(val);
			_putchar(',');
			j++;

		}

		i++;

	}

}
