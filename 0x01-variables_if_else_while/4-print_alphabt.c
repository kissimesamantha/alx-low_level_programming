#include<stdio.h>

/**
 * main - print the alphabet in lowercase except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x = 'a';

	do 
	{
		putchar(x);
		x++;

	} while (x != 'e' && x != 'q')

	putchar('\n');

	return (0);

}
