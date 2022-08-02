#include <stdio.h>

/**
 * main - program that prints the name of the file it was compiled from
 *followed by a new line.
 *@argc:contain total number of arguments
 *@argv: name of file
 *Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	return (0);
}
