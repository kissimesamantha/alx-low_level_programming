#include "main.h"
/**
 * _islower - functions that checks for lowercase characters
 *
 * Return: 1 if "c" is lowercase 0 otherwise
 *@c : enter a single letter
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);

}
