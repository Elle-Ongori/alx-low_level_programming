#include "main"

/**
 * puts2 - print one char out of 2 of a string
 * @str: char array string type
 * Description: Print char, 1st, 3rd, 5th and on...
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
