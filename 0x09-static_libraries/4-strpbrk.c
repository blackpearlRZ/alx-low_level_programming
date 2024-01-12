#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates the first occurrence in the string s
 *          of any of the bytes in the string accept
 * @s: the string to be scanned
 * @accept: the string containing the characters to be match
 * Return: a pointer to the byte in s
 *         or NULL if it's not found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (NULL);
}

