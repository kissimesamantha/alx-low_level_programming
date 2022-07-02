#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main -Prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
*/

int main(void)

{

	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0){
		printf("%d is positve\n", n);
	}
	else if (n==0){
		printf("%d is Zero\n", n);
	}
	 else if (n<0){
		printf("%d is positive\n", n);
	 }
	return (0);
}
