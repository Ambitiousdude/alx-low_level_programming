#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: number of argument count
 * @argv: one dimensional argument vector
 *
 * Return: 0 Always success
 */
int main(int argc, char *argv[])
{
	int a, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	a = atoi(argv[1]);

	change += a / 25;
	a = a % 25;
	change += a / 10;
	a = a % 10;
	change += a / 5;
	a = a % 5;
	change += a / 2;
	a = a % 2;
	change += a / 1;

	printf("%d\n", change);
	return (0);
}
