#include <stdio.h>

/**
 * main - print even valued Fibonacci terms
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int pre, cur, nxt, sum;

	pre = 0;
	cur = 1;
	sum = 0;

	while (cur < 4000000)
	{
		nxt = pre + cur;
		pre = cur;
		cur = nxt;

		if (cur % 2 == 0)
			sum += cur;
	}

	printf("%d\n", sum);
	return (0);
}
