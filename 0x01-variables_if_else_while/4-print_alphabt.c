#include<stdio.h>

/**
 * main - print the alphabet in lowercase except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{

		putchar(x);

		if (x == 'e' && x = 'q')
		{
			return (0);
		}

	}
	putchar('\n');

	return (0);

}
