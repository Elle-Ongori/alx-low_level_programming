#include <main.h>

/**
 * _atoi: takes string value,  return int type
 * @s: is a char type
 * Return: (res)
 */

int _atoi(char* s)
{
	int res = 0;
	
	for (int i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';
	
	return (res);
}
