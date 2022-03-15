#include <stdio.h>

/**
 * main - Print all possible combinations of three digits.
 * Return: Always return zero (0)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)

	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');

	return (0);
}