#include "main.h"
/**
 * _abs - this program prints laphabet follow by a new line
 *
 * @num: character value
 *
 * Return: num
 */

int _abs(int num)
{
	if (num < 0)
	{
		num = num * -1;
		return (num);
	}
	else
	{
		num = num * 1;
		return (num);
	}
}
