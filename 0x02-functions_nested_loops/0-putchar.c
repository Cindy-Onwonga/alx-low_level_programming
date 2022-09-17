#include "main.h"

/**
 * print_putchar - prints putchar followed by new line
 *
 * @ch: characters of putchar
 *
 * Return: Always 0
 */
void print_putchar(void);

int main(void)
{
	print_putchar();
	return (0);
}


void print_putchar(void)
{
	char ch;

	ch = '_';
	_putchar(ch);

	ch = 'p';
	_putchar(ch);

	ch = 'u';
	_putchar(ch);

	ch = 't';
	_putchar(ch);

	ch = 'c';
	_putchar(ch);

	ch = 'h';
	_putchar(ch);

	ch = 'a';
	_putchar(ch);

	ch = 'r';
	_putchar(ch);

	ch = '\n';
	_putchar(ch);

	return;
}
