#include<stdio.h>

/**
 * main - print the alphabet in lowercase except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x != 'q' && x != 'e'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);

}
