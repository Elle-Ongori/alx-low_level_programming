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
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
