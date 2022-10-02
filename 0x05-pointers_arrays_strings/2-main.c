#include "main.h"
#include <stdio.h>

/**
 * main - print length of a string
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
