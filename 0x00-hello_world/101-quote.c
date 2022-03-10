#include <stdio.h>
#include <unistd.h>

/**
 * main -print quote
 *
 * Description: prints Dora's quote
 *
 * Return always1
 */

int main(void)
{
	int s = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", s);
	return (1);
}
	
