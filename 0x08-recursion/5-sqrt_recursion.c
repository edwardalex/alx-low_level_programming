#include <stdio.h>
/**
 * _sqrt_recursion - suare root of n
 *
 * @n: number
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	int tmp = 2;

	if (tmp * tmp == n)
		return (tmp);

	return (_sqrt_recursion(n - 1) + 1);
}
