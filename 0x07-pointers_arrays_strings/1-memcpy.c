#include "main.h"
/**
 * _memcpy - copies n bytes from src memory area to dest memory area
 * @src: the source memory area
 * @dest: the destination memory area
 * @n: the n bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
