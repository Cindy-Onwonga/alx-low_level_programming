#include "main.h"
#include <stdio.h>

/**
 * main - update value of 98
 * @n: pointer variable
 *
 * Return: nothing
 */
void reset_to_98(int *n)
{
	int *p;

	n = 98;
	p = &n;
	*p = 98;
}
