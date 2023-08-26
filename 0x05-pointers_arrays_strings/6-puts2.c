#include "main.h"


/**
 * _strlen - return the length of a string
 * @str: the string
 * Return: the length
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * puts2 - print the other character of string
 * @str: the string
 */

void puts2(char *str)
{
	int i, length = _strlen(str);

	_putchar(*str);

	for (i = 2; i < length; i += 2)

	{
		_putchar(*(str + i));
	}
}
