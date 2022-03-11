#include <stdio.h>

/**
 *main - print alphabet in lowercase
 *Return: Always return zero (0)
 */

int main(void)
{
	int x = 97;

	while (x < 123)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);
		}
		x++;
	}
	putchar (10);

	return (0);
}
