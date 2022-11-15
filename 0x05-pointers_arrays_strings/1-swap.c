#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two integers
 * @a: pointer variable
 * @b: pointer variable
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
