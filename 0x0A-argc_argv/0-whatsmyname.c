#include <stdio.h>
#include "main.h"

/**
 * main: print the program name
 * @argc: is argument count
 * @argv: is argument vector[]
 * return: (0) success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argc = %d\n", argc);
		printf("The program name is: %s\n", argv[i]);
	}
	return (0);
}
