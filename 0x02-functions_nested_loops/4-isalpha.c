#include "main.h"

/**
 * _isalpha - check for alphabetics characters
 * @c: enter one letter
 * Return: 1 if c is a alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);

	else
		return (0);

}
