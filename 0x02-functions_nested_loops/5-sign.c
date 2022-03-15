#include "main.h"

/**
 * print_sign - Print the sign of the no.
 * @n: is a type int, can be - or +
 * Description : print +, 0, or - depending on no. and return
 * Return: 1 if +, 0 if 0 and -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
