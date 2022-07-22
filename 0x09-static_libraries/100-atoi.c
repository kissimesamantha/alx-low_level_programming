#include "main.h"

/**
 * _atoi - convert a strint to an integer
 * @s: pointer to character string
 * Return: nothing
 */

int _atoi(char *s)
{
	int sign;
	unsigned int n;
	char *tmp;

	tmp = s;
	n = 0;
	sign = 1;
	while (*tmp != '\0' && (*tmp < '0' || *tmp > '9'))
	{
		if (*tmp == '-')
			sign *= -1;
		tmp++;
	}
	if (*tmp != '\0')
	{
		do {
			n = n * 10 + (*tmp - '0');
			tmp++;
		}while (*tmp >= '0' && *tmp <= '9');
	}
	return (n * sign);
}
