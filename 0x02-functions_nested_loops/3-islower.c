#include "main.h"
/**
 * _islower - this program finds out if a letter is lowercase or not
 *
 * @c: letter value
 *
 * Return: num
 */

int _islower(int c)
{
	int num;

	if (c >= 'a' && c <= 'z')
	{
		num = 1;
	}
	else
	{
		num = 0;
	}
	return (num);
}
