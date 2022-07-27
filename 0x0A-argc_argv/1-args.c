#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 *it should print a number, followed by a new line
 *@args: this is a argument of number
 *@argv: this is a argument vector
 *Return: return 0
 */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
