#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = 0;
	while (a < 100)
	{
		b = (a / 10) % 10;
		c = a % 10;
		if (b < c)
		{
			putchar(b + '0');
			putchar(c + '0');
			if (a < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');

	return (0);
}
