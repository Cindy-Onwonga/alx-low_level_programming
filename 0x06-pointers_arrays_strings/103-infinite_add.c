#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer variable
 *
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0, j = 0;
	char tmp;

	while (*(n + i) != '\0')
		i++;

	i--;

	for (j = 0; j < i; j++, i--)
	{
		tmp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tmp;
	}
}
/**
 * *infinite_add - add two numbers
 * @n1: character 1
 * @n2: character 2
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: ponter to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0, int1 = 0, int2 = 0, tmp_sum = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || j >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			int1 = 0;
		else
			int1 = *(n1 + i) - '0';
		if (j < 0)
			int2 = 0;
		else
			int2 = *(n2 + j) - '0';
		tmp_sum = int1 + int2 + overflow;

		if (tmp_sum >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);

		*(r + digits) = (tmp_sum % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);

	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
