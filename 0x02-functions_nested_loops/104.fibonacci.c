#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, l;

	j = 0;
	k = 1;
	l = k + j;

	for (i = 3; i <= 101; ++i)
	{
		printf("%d, ", l);
		j = k;
		k = l;
		l = k + j;
	}
	printf("\n");
	return (0);
}
