#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, j, k, l;

	j = 0;
	k = 1;

	for (i = 1; i <= 98; i++)
	{
		l = k + j;
		if (i != 98)
			printf("%lu, ", l);
		else
			printf("%lu\n", l);

		j = k;
		k = l;
	}
	return (0);
}
