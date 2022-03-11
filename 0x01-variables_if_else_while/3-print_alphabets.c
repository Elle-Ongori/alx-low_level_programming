#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 * Return: Always return zero(0)
 */

int main(void)
{
	char ch, y;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}

	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar (y);
	}

	putchar ('\n');

	return (0);
}
