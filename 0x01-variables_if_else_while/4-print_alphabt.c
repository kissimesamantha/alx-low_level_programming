#include<stdio.h>

/**
 * main - print the alphabet in lowercase except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; (x != 'q' && x != 'e') && x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);

}
