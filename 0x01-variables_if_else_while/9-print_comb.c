#include <stdio.h>

/**
 * main - print all numbers of single digits with commas and space between then
 * Return: Always return zero (0)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar('\n');

	return (0);
}
