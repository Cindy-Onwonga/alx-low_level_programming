#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		putchar((dig % 10) + '0');
		if (dig == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
