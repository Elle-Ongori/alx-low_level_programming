#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len)
	{
		_putchar(s[--len]);
	}
	_putchar('\n');
}
