#include <stdio.h>

/**
 * main - print first 10 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, l, sum;

	j = 0;
	k = 1;
	l = k + j;

	while (l < 4000000)
	{
		j = k;
		k = l;
		l = k + j;
		if (l % 2 == 0)
		{
			sum = l;
			sum

	}
	return (0);
}
