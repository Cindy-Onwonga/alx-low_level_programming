#include <stdio.h>

/**
 * main - print forst 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, j, k, l;

	j = 0;
	k = 1;
	l = k + j;

	for (i = 3; i <= 52; ++i)
	{
		if (l != 20365011074)
			printf("%ld, ", l);
		else
			printf("%ld\n", l);
		j = k;
		k = l;
		l = k + j;
	}
	return (0);
}
