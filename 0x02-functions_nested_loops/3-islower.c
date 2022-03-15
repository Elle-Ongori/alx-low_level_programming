#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: - is a char type,letter
 *
 * Return: - 1 if lowercase, o if not
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
