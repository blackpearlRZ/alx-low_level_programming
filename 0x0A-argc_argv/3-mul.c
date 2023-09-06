#include <stdio.h>

/**
 * main - print the result of multications ofs two numbers
 * @argc: argument count
 * @argv: argument passed
 * Return: the result of multiplication or 1
 */
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3 ; i++)
			mul = mul * atoi(argv[argc];
	}
	printf("%d\n", mul);
	return (0);
}


