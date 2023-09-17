#include"main.h"

/**
 * _memset - fills memory with a constate byte
 * @s: memory area
 * @b: constant byte
 * @n: the first bytes of the memoey area
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0;  i < n ; i++)
	{
		*(s + i) = b;
	}
	return (s);
}


/**
 * _calloc - allocates memory for an array
 * @nmemb: number of  elements of the array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = (void *)malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);
	_memset(arr, 0, nmemb * size);

	return (arr);
}
