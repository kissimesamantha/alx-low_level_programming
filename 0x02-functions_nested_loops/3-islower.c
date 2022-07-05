#include "main.h"
/**
 * main - _islower - functions that checks for lowercase characters
 *
 * Return: 1 if c islowercase 0 otherwise
 */

int _islower(int c)
{

	if ( c >= 97 && c <= 122)
		return (1);

	else
		return (0);

}
