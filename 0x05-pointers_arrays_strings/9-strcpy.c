#include <main.h>

/**
 * strcpy  - copies the string
 * @src: the source
 * @dest: the destination
 * Return: the pointer to dest
 */
char *strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}