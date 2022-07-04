#include <stdio.h>


/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: always 0 (success)
 */
int main(void)
{
	int x;
	char n;

	for (x = 0; x <= 9; x++)
	{
		putchar((x % 10) + '0');

	}
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);

	putchar('\n');

	return (0);

}
