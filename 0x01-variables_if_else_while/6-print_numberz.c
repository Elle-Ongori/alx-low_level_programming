#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0
 * Return: Always return zero (0)
 */

int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
