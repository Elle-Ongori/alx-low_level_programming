#include "main"

/**
 * print_line - will draw a straight line in terminal
 *
 * @n: is the number of times char _ should be printed
 *
 * Return: Always 0 (success)
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
