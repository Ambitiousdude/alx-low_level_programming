#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 Always Success
 */
int main(void)
{
	int n;
	int sumnum;

	n = 0;
	sumnum = 0;
	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sumnum += n;
		}
		n++;
	}
	printf("%d\n", sumnum);
	return (0);
}
