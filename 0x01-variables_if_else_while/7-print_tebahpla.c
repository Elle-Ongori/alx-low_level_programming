#include <stdio.h>

/**
 * main - print the alphabet in reverse
 * Return: Always return zero (0)
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}

	putchar('\n');

	return (0);
}
