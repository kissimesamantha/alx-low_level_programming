#include<stdio.h>

/**
 * main - prints the alphabets in lowercase and uppercase follow by a new line
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);

}
