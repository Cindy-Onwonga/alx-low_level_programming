#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dig;
	char ch;

	for (dig = '0'; dig <= '9'; dig++)
		putchar(dig);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
