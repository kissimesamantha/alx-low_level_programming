#include <stdio.h>


/**
 * main - prints lowercase alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);

		x--;

	}

	putchar('\n');

	return (0);

}
