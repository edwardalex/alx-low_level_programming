#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - this function gets the legth in bytes
 *
 * @a: string
 * @size: string
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int x = 0;
	int x1 = 0;

	for (i = 0; i <= (size * size) - 1; i += size + 1)
	{
		x += a[i];
	}
	for (i = size * (size - 1); i >= 0; i -= size - 1)
	{
		x1 += a[i];
	}
	printf("%d, %d\n", x, x1);
}
