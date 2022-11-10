#include <stdio.h>
/**
 * main - print all natural multiples of 3 and 5
 *
 * Return: Always 0
 */
int main(void)
{
	int a, sum;

	if (a % 3 == 0 || a % 5 == 0)
	{
		for (a = 0; a < 1024; a++)
			sum += a;

	}
	printf("%d\n", sum);
	return (0);
}
