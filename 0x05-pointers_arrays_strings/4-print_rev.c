#include <main.h>

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
 * print_rev- prints a string, in reverse, followed by a new line
 * @s: the string
 * return :
 */

void print_rev(char *s)
{
	int i;
	int length = _strlen(s);
	int lastChar = length - 1;

	i = lastChar;

	for (i = lastChar ; i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
