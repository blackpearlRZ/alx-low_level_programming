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
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 */

void _print_rev_recursion(char *s)
{
	int i;
	int length = _strlen(s);
	int lastChar = length - 1;

	i = lastChar;

	if (i == 0)
	{
		_putchar('\n');

	}
	_putchar(s[i]);
	_print_rev_recursion(s - 1);
}

