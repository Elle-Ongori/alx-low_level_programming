#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - print last digit randomly
 *
 *betty style doc for function main goes there
 *Return: always return zero(0)
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

if (last > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
else if (last == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, last);
}
else
{
	printf("Last digit of %d is %d and is less that 6 and not 0\n", n, last);
}

return (0);
}