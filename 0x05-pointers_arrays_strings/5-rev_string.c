#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: the length
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
/**
 * rev_string - reverse a string
 * @s: the string
 * return :
 */

void rev_string(char *s)
{
	int i;
	int length = _strlen(s);
	int lastChar = length - 1;

	i = lastChar;

	for (i = lastChar ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
