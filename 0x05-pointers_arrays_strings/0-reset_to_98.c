#include "main.h"

/**
*reset_to_98 - take a pointer to an int as parameter and update the value to 98
* @*n: pointer parameter
*
* return: always 0
*/

void reset_to_98(int *n)
{
	int a;

	a = 98;
	*n = a;

	return (0);
}
