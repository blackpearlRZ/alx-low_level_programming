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
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: a pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int k, len = _strlen(dest);

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[len + k] = src[k];
	}
	dest[len + k] = '\0';
	return (dest);
}
