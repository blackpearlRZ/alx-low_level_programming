#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @n: the first bytes of teh memory area
 * @s: the memory area
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
