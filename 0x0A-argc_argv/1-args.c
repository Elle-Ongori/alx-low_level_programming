#include <stdio.h>
#include "main.h"

/**
 * main - print a number followed by new line
 * @argc: is argument count
 * @argv: is vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		(void) argv;
		printf("%d\n", argc);
	}

	return (0);
}
