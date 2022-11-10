#include <stdio.h>
/**
 * main - print all natural multiples of 3 and 5
 *
 * Return: Always 0
 */
int main(void)
{
	int a, sum;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
