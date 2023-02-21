#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char:%lu bytes\n", sizeof(c));
	printf("size of an int:%lu bytes\n", sizeof(i));
	printf("size of a long int:%lu bytes\n", sizeof(li));
	printf("size of a long long int:%lu bytes\n", sizeof(lli));
	printf("size of a float:%lu bytes\n", sizeof(f));
}
