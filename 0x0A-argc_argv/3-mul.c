#include <stdio.h>

/**
 * main - print the result of multications ofs two numbers
 * @argc: argument count
 * @argv: argument passed
 * Return: the result of multiplication or 1
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]);
	return (0);

}


