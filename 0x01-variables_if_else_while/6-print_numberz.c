#include <stdio.h>

/**
 * main - prints all number of base 10 starting from 0
 * don't use variable of type char
 * return: always 0 (success)
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
	 putchar(x);

	 x++;
	}

	return (0);
}
