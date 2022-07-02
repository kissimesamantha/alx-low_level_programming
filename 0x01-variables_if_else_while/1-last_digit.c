#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Assign a random number to the variable n
 * print the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
	printf("Last digit of %d, is %d and is greater than 5\n", n, n % 10);
	}

	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n);

	if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

	return (0);

}
