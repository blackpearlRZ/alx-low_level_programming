#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: kinda depends
 */

int **alloc_grid(int width, int height)
{
	int **griid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	griid = malloc(sizeof(int *) * height);
	if (!griid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		griid[i] = malloc(sizeof(int) * width);
		if (griid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(griid[j]);
			free(griid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			griid[i][j] = 0;
	}
	return (griid);
}
