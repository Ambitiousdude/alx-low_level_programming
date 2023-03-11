#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 * @argc: number of argument count
 * @argv: one dimensional argument vector
 *
 * Return: 0 Always success
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mul);
	}
	return (0);
}
