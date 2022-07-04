#include<stdio.h>

/**
 * main - print the alphabet in lowercase except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x = 'a';

	while (x != 'q' && x != 'e')
	{

		putchar(x);

		x++;
	}
	putchar('\n');

	return (0);

}
