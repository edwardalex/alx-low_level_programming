#include "main.h"
/**
 * print_last_digit - this program prints last digit of a number
 *
 * @n: number value
 *
 * Return: num
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
