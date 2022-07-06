#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int l, c, n;

	for (l = 0; l <= 9; l++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			n = (l * c);
			if ((n / 10) > 0)
			{
				_putchar((n / 10) + '0');

			}
			else
			{
				_putchar(' ');

			}

			_putchar((n % 10) + '0');

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');

			}

		}

		_putchar('\n');

	}

}
