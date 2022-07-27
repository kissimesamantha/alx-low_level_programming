#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * it print the result of the multiplication,followed by a new line
 * the two numbers and result of the multiplication 
 * can be stored in an integer program should print Error,
 * followed by a new line if it does'nt receive two
 * arguments
 * Return: always 0 (success) otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
