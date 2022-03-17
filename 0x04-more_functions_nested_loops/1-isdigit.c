#include "main.h"

/**
 * _isdigit - is a function that prints sign of number
 * description
 * @c: is a digit
 *
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
